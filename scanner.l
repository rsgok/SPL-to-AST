%{
#include <stdio.h>
#include <iostream>
#include "y.tab.hpp"
#include "tree.h"
// #include "token.h"

using namespace std;

void count_col();
void count_row();
void proc(string t);
void proc_content(string t, string content);

extern YYSTYPE yylval;
%}

digit [0-9]
number {digit}+
letter [a-zA-Z]
id {letter}(_|{letter}|{digit})*
integer 0|([1-9]{digit}*)
real 0|([1-9]{digit}*)[.]{digit}+
string \'[^']*\'
char \'[.]\'
newline \n
whitespace [ \t]+
name ({letter}|_)+({letter}|_|{digit})+
boolean (true)|(false)

%%

"/*" { count_col(); }
[\t\v\f] { count_col(); }
{newline} { count_row(); }

"(" { proc_content("LP", "("); return LP;}
")" { proc_content("RP", ")"); return RP;}
"[" { proc_content("LB", "["); return LB;}
"]" { proc_content("RB", "]"); return RB;}
"." { proc_content("DOT", "."); return DOT;}
"," { proc_content("COMMA", ","); return COMMA;}
":" { proc_content("COLON", ":"); return COLON;}
"*" { proc_content("MUL", "*"); return MUL;}
"/" { proc_content("DIV", "/"); return DIV;}
"<>" { proc_content("UNEQUAL", "<>"); return UNEQUAL;}
"not" { proc_content("NOT", "not"); return NOT;}
"+" { proc_content("PLUS", "+"); return PLUS;}
"-" { proc_content("MINUS", "-"); return MINUS;}
">=" { proc_content("GE", ">="); return GE;}
">" { proc_content("GT", ">"); return GT;}
"<=" { proc_content("LE", "<="); return LE;}
"<" { proc_content("LT", "<"); return LT;}
"=" { proc_content("EQUAL", "="); return EQUAL;}
":=" { proc_content("ASSIGN", ":="); return ASSIGN;}
"mod" { proc_content("MOD", "%"); return MOD;}
"%" { proc_content("MOD", "%"); return MOD;}
".." { proc_content("DOTDOT", ".."); return DOTDOT;}
";" { proc_content("SEMI", ";"); return SEMI;}

"false" {proc_content("SYS_CON", "false"); return SYS_CON;}
"true" {proc_content("SYS_CON", "true"); return SYS_CON;}
"maxint" {proc_content("SYS_CON", "maxint"); return SYS_CON;}
"abs" {proc_content("SYS_FUNCT", "abs"); return SYS_FUNCT;}
"chr" {proc_content("SYS_FUNCT", "chr"); return SYS_FUNCT;}
"odd" {proc_content("SYS_FUNCT", "odd"); return SYS_FUNCT;}
"ord" {proc_content("SYS_FUNCT", "ord"); return SYS_FUNCT;}
"pred" {proc_content("SYS_FUNCT", "pred"); return SYS_FUNCT;}
"sqr" {proc_content("SYS_FUNCT", "sqr"); return SYS_FUNCT;}
"sqrt" {proc_content("SYS_FUNCT", "sqrt"); return SYS_FUNCT;}
"succ" {proc_content("SYS_FUNCT", "succ"); return SYS_FUNCT;}
"write" {proc_content("SYS_PROC", "write"); return SYS_PROC;}
"writeln" {proc_content("SYS_PROC", "writeln"); return SYS_PROC;}
"integer" {proc_content("SYS_TYPE", "integer"); return SYS_TYPE;} 
"real" {proc_content("SYS_TYPE", "real"); return SYS_TYPE;}
"string" {proc_content("SYS_TYPE", "string"); return SYS_TYPE;}
"char" {proc_content("SYS_TYPE", "char"); return SYS_TYPE;}
"boolean" {proc_content("SYS_TYPE", "boolean"); return SYS_TYPE;}

{real} { 
  yylval.node = new TreeNode("REAL", yytext);
	count_col();
  return REAL; 
}
{integer} { 
	yylval.node = new TreeNode("INTEGER", yytext);
	count_col();
	return INTEGER; 
}
{char} { 
  yylval.node = new TreeNode("CHAR", yytext);
	count_col();
  return CHAR; 
}
{string} { 
  yylval.node = new TreeNode("STRING", yytext);
	count_col();
  return STRING; 
}

"read" { proc_content("READ", "read"); return READ; }

"and" { proc_content("AND", "and"); return AND;}
"array" { proc_content("ARRAY", "array"); return ARRAY;}
"begin" { proc_content("SBEGIN", "begin"); return SBEGIN;}
"case" { proc_content("CASE", "case"); return CASE;}
"const" { proc_content("CONST", "const"); return CONST;}
"div" { proc_content("DIV", "div"); return DIV;}
"do" { proc_content("DO", "do"); return DO;}
"downto" { proc_content("DOWNTO", "downto"); return DOWNTO;}
"else" { proc_content("ELSE", "else"); return ELSE;}
"end" { proc_content("END", "end"); return END;}
"for" { proc_content("FOR", "for"); return FOR;}
"function" { proc_content("FUNCTION", "function"); return FUNCTION;}
"goto" { proc_content("GOTO", "goto"); return GOTO;}
"if" { proc_content("IF", "if"); return IF;}
"of" { proc_content("OF", "of"); return OF;}
"or" { proc_content("OR", "or"); return OR;}
"packed" { proc_content("PACKED", "packed"); return PACKED;}
"procedure" {proc_content("PROCEDURE", "procedure"); return PROCEDURE;}
"program" { proc_content("PROGRAM", "program"); return PROGRAM;}
"record" { proc_content("RECORD", "record"); return RECORD;}
"repeat" { proc_content("REPEAT", "repeat"); return REPEAT;}
"then" { proc_content("THEN", "then"); return THEN;}
"to" { proc_content("TO", "to"); return TO;}
"type" { proc_content("TYPE", "type"); return TYPE;}
"until" { proc_content("UNTIL", "until"); return UNTIL;}
"var" { proc_content("VAR", "var"); return VAR;}
"while" { proc_content("WHILE", "while"); return WHILE;}

{id} {
	yylval.node = new TreeNode("ID", yytext);
	count_col();
	return ID;
}

%%
void proc(string name) {
	yylval.node = new TreeNode(name); 
	count_col(); 
}

void proc_content(string name, string content) {
	yylval.node = new TreeNode(name, content);
	count_col(); 
}

int yywrap()
{
	return 1;
}

int yycol = 1;
int yyrow = 1;

void count_col(){
  int i;

  for (i = 0; yytext[i] != '\0'; i++){
    if(yytext[i] == '\t'){
      yycol += 8 - (yycol % 8);
    }else{
      yycol++;
    }
  }
}

void count_row(){
  yycol = 1;
  yyrow++;
}