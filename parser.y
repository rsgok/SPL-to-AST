%{
#include <stdlib.h>
#include <stdio.h>
#include <string>

#ifndef YYPARSER
#include "tree.h"
// #include "token.h"
#endif

extern FILE* yyin;
extern FILE* yyout;
extern int yyrow;
extern int yycol;
extern char* yytext;

int yylex();
void yyerror(const char*s);

// root: AST root
TreeNode *root;
// flag: yyparse flag
int flag=0; 

%}

%define "parse.error" "verbose"

%union{
  TreeNode* node;
}

%token <node> AND ARRAY ASSIGN SBEGIN CASE CHAR COLON COMMA CONST DIV DO SYS_CON PROCEDURE
%token <node> DOT DOTDOT DOWNTO OR ELSE END EQUAL FOR FUNCTION GE GOTO GT ID PACKED
%token <node> IF INTEGER LB LE LP LT MINUS MOD MUL NOT OF PLUS RB SYS_TYPE PROGRAM
%token <node> READ REAL RECORD REPEAT RP SEMI STRING THEN TO TYPE UNEQUAL UNTIL VAR WHILE SYS_FUNCT SYS_PROC

%type <node> program program_head routine routine_head routine_body sub_routine const_part type_part var_part routine_part
%type <node> const_expr_list const_value type_decl_list type_decl simple_type_decl array_type_decl type_definition record_type_decl field_decl_list
%type <node> field_decl name_list var_decl_list function_decl procedure_decl function_head parameters procedure_head para_decl_list para_type_list
%type <node> var_para_list val_para_list compound_stmt stmt_list stmt non_label_stmt assign_stmt proc_stmt if_stmt repeat_stmt while_stmt
for_stmt case_stmt goto_stmt expression args_list expression_list factor else_clause direction case_expr_list case_expr expr term var_decl

%start program

%%

program:
    program_head routine DOT{
        root = new TreeNode("program",3,$1,$2,$3);
    };

program_head:
    PROGRAM ID SEMI {
        $$=new TreeNode("program_head",3,$1,$2,$3);
    };

routine:
    routine_head routine_body {
        $$=new TreeNode("routine",2,$1,$2);
    };

sub_routine:
    routine_head routine_body {
        $$=new TreeNode("sub_routine",2,$1,$2);
    };

routine_head:
    const_part type_part var_part routine_part {
        $$=new TreeNode("routine_head",4,$1,$2,$3,$4);
    };

const_part:
    CONST const_expr_list {
        $$=new TreeNode("const_part",2,$1,$2);
    }
    | {
        $$=new TreeNode("undefined", "const_part no member");
    };

const_expr_list:
    const_expr_list ID EQUAL const_value SEMI {
        $$=new TreeNode("const_expr_list",5,$1,$2,$3,$4,$5);
    }
    | ID EQUAL const_value SEMI {
        $$=new TreeNode("const_expr_list",4,$1,$2,$3,$4);
    };

const_value:
    INTEGER {
        $$=new TreeNode("const_value", 1, $1);
    }
    | REAL {
        $$=new TreeNode("const_value", 1, $1);
    }
    | CHAR {
        $$=new TreeNode("const_value", 1, $1);
    }
    | SYS_CON {
        $$=new TreeNode("const_value", 1, $1);
    };

type_part:
    TYPE type_decl_list {
        $$=new TreeNode("type_part", 2, $1, $2);
    }
    | {
        $$=new TreeNode("undefined", "type_part no member");
    };

type_decl_list:
    type_decl_list type_definition {
        $$=new TreeNode("type_decl_list", 2, $1, $2);
    }
    | type_definition {
        $$=new TreeNode("type_decl_list", 1, $1);
    };

type_definition:
    ID EQUAL type_decl SEMI {
        $$=new TreeNode("type_definition",4,$1,$2,$3,$4);
    };

type_decl:
    simple_type_decl {
        $$=new TreeNode("type_decl", 1, $1);
    }
    | array_type_decl {
        $$=new TreeNode("type_decl", 1, $1);
    }
    | record_type_decl {
        $$=new TreeNode("type_decl", 1, $1);
    };

simple_type_decl:
    SYS_TYPE {
        $$=new TreeNode("simple_type_decl", 1, $1);
    }
    | ID {
        $$=new TreeNode("simple_type_decl", 1, $1);
    }
    | LP name_list RP {
        $$=new TreeNode("simple_type_decl", 3, $1, $2, $3);
    }
    | const_value DOTDOT const_value {
        $$=new TreeNode("simple_type_decl", 3, $1, $2, $3);
    }
    | MINUS const_value DOTDOT const_value {
        $$=new TreeNode("simple_type_decl", 4, $1, $2, $3, $4);
    }
    | MINUS const_value DOTDOT MINUS const_value {
        $$=new TreeNode("simple_type_decl", 5, $1, $2, $3, $4, $5);
    }
    | ID DOTDOT ID {
        $$=new TreeNode("simple_type_decl", 3, $1, $2, $3);
    };

array_type_decl:
    ARRAY LB simple_type_decl RB OF type_decl {
        $$=new TreeNode("array_type_decl", 6, $1, $2, $3, $4, $5, $6);
    };

record_type_decl:
    RECORD field_decl_list END {
        $$=new TreeNode("record_type_decl", 3, $1, $2, $3);
    };

field_decl_list:
    field_decl_list field_decl {
        $$=new TreeNode("field_decl_list", 2, $1, $2);
    }
    | field_decl {
        $$=new TreeNode("field_decl_list", 1, $1);
    };

field_decl:
    name_list COLON type_decl SEMI {
        $$=new TreeNode("field_decl", 4, $1, $2, $3, $4);
    };

name_list:
    name_list COMMA ID {
        $$=new TreeNode("name_list", 3, $1, $2, $3);
    }
    | ID {
        $$=new TreeNode("name_list", 1, $1);
    };

var_part:
    VAR var_decl_list {
        $$=new TreeNode("var_part", 2, $1, $2);
    }
    | {
        $$=new TreeNode("undefined", "var_part no member");
    };

var_decl_list:
    var_decl_list var_decl {
        $$=new TreeNode("var_decl_list", 2, $1, $2);
    }
    | var_decl {
        $$=new TreeNode("var_decl_list", 1, $1);
    };

var_decl:
    name_list COLON type_decl SEMI {
        $$=new TreeNode("var_decl", 4, $1, $2, $3, $4);
    };

routine_part:
    routine_part function_decl {
        $$=new TreeNode("routine_part", 2, $1, $2);
    }
    | routine_part procedure_decl {
        $$=new TreeNode("routine_part", 2, $1, $2);
    }
    | function_decl {
        $$=new TreeNode("routine_part", 1, $1);
    }
    | procedure_decl {
        $$=new TreeNode("routine_part", 1, $1);
    }
    | {
        $$=new TreeNode("routine_part", "routine_part no member");
    };

function_decl:
    function_head SEMI sub_routine SEMI {
        $$=new TreeNode("function_decl", 4, $1, $2, $3, $4);
    };

function_head:
    FUNCTION ID parameters COLON simple_type_decl {
        $$=new TreeNode("function_head", 5, $1, $2, $3, $4, $5);
    };

procedure_decl:
    procedure_head SEMI sub_routine SEMI {
        $$=new TreeNode("procedure_decl", 4, $1, $2, $3, $4);
    };

procedure_head:
    PROCEDURE ID parameters {
        $$=new TreeNode("procedure_head", 3, $1, $2, $3);
    };

parameters:
    LP para_decl_list RP {
        $$=new TreeNode("parameters", 3, $1, $2, $3);
    }
    | {
        $$=new TreeNode("parameters", "parameters no member");
    };

para_decl_list:
    para_decl_list SEMI para_type_list {
        $$=new TreeNode("para_decl_list", 3, $1, $2, $3);
    }
    | para_type_list {
        $$=new TreeNode("para_decl_list", 1, $1);
    };

para_type_list:
    var_para_list COLON simple_type_decl {
        $$=new TreeNode("para_type_list", 3, $1, $2, $3);
    }
    | val_para_list COLON simple_type_decl {
        $$=new TreeNode("para_type_list", 3, $1, $2, $3);
    };

var_para_list:
    VAR name_list {
        $$=new TreeNode("var_para_list", 2, $1, $2);
    };

val_para_list:
    name_list {
        $$=new TreeNode("val_para_list", 1, $1);
    };

routine_body:
    compound_stmt {
        $$=new TreeNode("routine_body", 1, $1);
    };

compound_stmt:
    SBEGIN stmt_list END {
        $$=new TreeNode("compound_stmt", 3, $1, $2, $3);
    };

stmt_list:
    stmt_list stmt SEMI {
        $$=new TreeNode("stmt_list", 3, $1, $2, $3);
    }
    | {
        $$=new TreeNode("stmt_list", "stmt_list no member"); 
    };

stmt:
    INTEGER COLON non_label_stmt {
        $$=new TreeNode("stmt", 3, $1, $2, $3);
    }
    | non_label_stmt {
        $$=new TreeNode("stmt", 1, $1);
    };

non_label_stmt:
    assign_stmt {
        $$=new TreeNode("non_label_stmt", 1, $1);
    }
    | proc_stmt {
        $$=new TreeNode("non_label_stmt", 1, $1);
    }
    | compound_stmt {
        $$=new TreeNode("non_label_stmt", 1, $1);
    }
    | if_stmt {
        $$=new TreeNode("non_label_stmt", 1, $1);
    }
    | repeat_stmt {
        $$=new TreeNode("non_label_stmt", 1, $1);
    }
    | while_stmt {
        $$=new TreeNode("non_label_stmt", 1, $1);
    }
    | for_stmt {
        $$=new TreeNode("non_label_stmt", 1, $1);
    }
    | case_stmt {
        $$=new TreeNode("non_label_stmt", 1, $1);
    }
    | goto_stmt {
        $$=new TreeNode("non_label_stmt", 1, $1);
    };

assign_stmt:
    ID ASSIGN expression {
        $$=new TreeNode("assign_stmt", 3, $1, $2, $3);
    }
    | ID LB expression RB ASSIGN expression {
        $$=new TreeNode("assign_stmt", 6, $1, $2, $3, $4, $5, $6);
    }
    | ID DOT ID ASSIGN expression {
        $$=new TreeNode("assign_stmt", 5, $1, $2, $3, $4, $5);
    };

proc_stmt:
    ID {
        $$=new TreeNode("proc_stmt", 1, $1);
    }
    | ID LP args_list RP {
        $$=new TreeNode("proc_stmt", 4, $1, $2, $3, $4);
    }
    | SYS_PROC {
        $$=new TreeNode("proc_stmt", 1, $1);
    }
    | SYS_PROC LP expression_list RP {
        $$=new TreeNode("proc_stmt", 4, $1, $2, $3, $4);
    }
    | READ LP factor RP {
        $$=new TreeNode("proc_stmt", 4, $1, $2, $3, $4);
    };

if_stmt:
    IF expression THEN stmt else_clause {
        $$=new TreeNode("if_stmt", 5, $1, $2, $3, $4, $5);
    };

else_clause:
    ELSE stmt {
        $$=new TreeNode("else_clause", 2, $1, $2);
    }
    | {
        $$=new TreeNode("else_clause", "else_clause no member"); 
    };

repeat_stmt:
    REPEAT stmt_list UNTIL expression {
        $$=new TreeNode("repeat_stmt", 4, $1, $2, $3, $4);
    };

while_stmt:
    WHILE expression DO stmt {
        $$=new TreeNode("while_stmt", 4, $1, $2, $3, $4);
    };

for_stmt:
    FOR ID ASSIGN expression direction expression DO stmt {
        $$=new TreeNode("for_stmt", 8, $1, $2, $3, $4, $5, $6, $7, $8);
    };

direction:
    TO {
        $$=new TreeNode("direction", 1, $1);
    }
    | DOWNTO {
        $$=new TreeNode("direction", 1, $1);
    };

case_stmt:
    CASE expression OF case_expr_list END {
        $$=new TreeNode("case_stmt", 5, $1, $2, $3, $4, $5);
    };

case_expr_list:
    case_expr_list case_expr {
        $$=new TreeNode("case_expr_list", 2, $1, $2);
    }
    | case_expr {
        $$=new TreeNode("case_expr_list", 2, $1);
    };

case_expr:
    const_value COLON stmt SEMI {
        $$=new TreeNode("case_expr", 4, $1, $2, $3, $4);
    }
    | ID COLON stmt SEMI {
        $$=new TreeNode("case_expr", 4, $1, $2, $3, $4);
    };

goto_stmt:
    GOTO INTEGER {
        $$=new TreeNode("direction", 2, $1, $2);
    };

expression_list:
    expression_list COMMA expression {
        $$=new TreeNode("expression_list", 3, $1, $2, $3);
    }
    | expression {
        $$=new TreeNode("expression_list", 1, $1);
    };

expression:
    expression GE expr {
        $$=new TreeNode("expression", 3, $1, $2, $3);
    }
    | expression GT expr {
        $$=new TreeNode("expression", 3, $1, $2, $3);
    }
    | expression LE expr {
        $$=new TreeNode("expression", 3, $1, $2, $3);
    }
    | expression LT expr {
        $$=new TreeNode("expression", 3, $1, $2, $3);
    }
    | expression EQUAL expr {
        $$=new TreeNode("expression", 3, $1, $2, $3);
    }
    | expression UNEQUAL expr {
        $$=new TreeNode("expression", 3, $1, $2, $3);
    }
    | expr {
        $$=new TreeNode("expression", 1, $1);
    };

expr:
    expr PLUS term {
        $$=new TreeNode("expr", 3, $1, $2, $3);
    }
    | expr MINUS term {
        $$=new TreeNode("expr", 3, $1, $2, $3);
    }
    | expr OR term {
        $$=new TreeNode("expr", 3, $1, $2, $3);
    }
    | term {
        $$=new TreeNode("expr", 1, $1);
    };

term:
    term MUL factor {
        $$=new TreeNode("term", 3, $1, $2, $3);
    }
    | term DIV factor {
        $$=new TreeNode("term", 3, $1, $2, $3);
    }
    | term MOD factor {
        $$=new TreeNode("term", 3, $1, $2, $3);
    }
    | term AND factor {
        $$=new TreeNode("term", 3, $1, $2, $3);
    }
    | factor {
        $$=new TreeNode("term", 1, $1);
    };

factor:
    ID {
        $$=new TreeNode("factor", 1, $1);
    }
    | ID LP args_list RP {
        $$=new TreeNode("factor", 4, $1, $2, $3, $4);
    }
    | SYS_FUNCT {
        $$=new TreeNode("factor", 1, $1);
    }
    | SYS_FUNCT LP args_list RP {
        $$=new TreeNode("factor", 4, $1, $2, $3, $4);
    }
    | const_value {
        $$=new TreeNode("factor", 1, $1);
    }
    | LP expression RP {
        $$=new TreeNode("factor", 3, $1, $2, $3);
    }
    | NOT factor {
        $$=new TreeNode("factor", 2, $1, $2);
    }
    | MINUS factor {
        $$=new TreeNode("factor", 2, $1, $2);
    }
    | ID LB expression RB {
        $$=new TreeNode("factor", 4, $1, $2, $3, $4);
    }
    | ID DOT ID {
        $$=new TreeNode("factor", 3, $1, $2, $3);
    };

args_list:
    args_list COMMA expression {
        $$=new TreeNode("args_list", 3, $1, $2, $3);
    }
    | expression {
        $$=new TreeNode("args_list", 1, $1);
    };

%%

int main(int argc,char* argv[]){
    // input demo code file
    yyin = fopen(argv[1],"r");
    yyparse();
    // output AST to json file
    root->write_json("./syntax-tree.json");
    fclose(yyin);
    return flag;
}

void yyerror(char const *s)
{
	//fflush(stdout);
    cout<<endl<<"ROW:"<<yyrow<<" COL:"<<yycol<<"   ";
    cout<<s<<endl;
	//printf("\n%*s\n%*s\n", column, "^", column, s);
}
