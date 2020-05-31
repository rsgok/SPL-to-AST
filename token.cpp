#include "token.h"

// map of string-token
std::map<std::string, Token> tokenMap = {
    {"LP", Token::LP},
    {"RP", Token::RP},
    {"LB", Token::LB},
    {"RB", Token::RB},
    {"DOT", Token::DOT},
    {"COMMA", Token::COMMA},
    {"COLON", Token::COLON},
    {"MUL", Token::MUL},
    {"DIV", Token::DIV},
    {"UNEQUAL", Token::UNEQUAL},
    {"NOT", Token::NOT},
    {"PLUS", Token::PLUS},
    {"MINUS", Token::MINUS},
    {"GE", Token::GE},
    {"GT", Token::GT},
    {"LE", Token::LE},
    {"LT", Token::LT},
    {"EQUAL", Token::EQUAL},
    {"ASSIGN", Token::ASSIGN},
    {"MOD", Token::MOD},
    {"DOTDOT", Token::DOTDOT},
    {"SEMI", Token::SEMI},
    {"SYS_CON", Token::SYS_CON},
    {"SYS_FUNCT", Token::SYS_FUNCT},
    {"SYS_PROC", Token::SYS_PROC},
    {"SYS_TYPE", Token::SYS_TYPE},
    {"INTEGER", Token::INTEGER},
    {"REAL", Token::REAL},
    {"CHAR", Token::CHAR},
    {"STRING", Token::STRING},
    {"ID", Token::ID},
    {"BOOLEAN", Token::BOOLEAN},
    {"AND", Token::AND},
    {"ARRAY", Token::ARRAY},
    {"SBEGIN", Token::SBEGIN},
    {"CASE", Token::CASE},
    {"CONST", Token::CONST},
    {"DO", Token::DO},
    {"DOWNTO", Token::DOWNTO},
    {"ELSE", Token::ELSE},
    {"END", Token::END},
    {"FOR", Token::FOR},
    {"FUNCTION", Token::FUNCTION},
    {"GOTO", Token::GOTO},
    {"IF", Token::IF},
    {"OF", Token::OF},
    {"OR", Token::OR},
    {"PACKED", Token::PACKED},
    {"PROCEDURE", Token::PROCEDURE},
    {"PROGRAM", Token::PROGRAM},
    {"RECORD", Token::RECORD},
    {"REPEAT", Token::REPEAT},
    {"THEN", Token::THEN},
    {"TO", Token::TO},
    {"TYPE", Token::TYPE},
    {"UNTIL", Token::UNTIL},
    {"VAR", Token::VAR},
    {"WHILE", Token::WHILE},
    {"READ", Token::READ},
    {"NAME", Token::NAME},
    {"program", Token::program},
    {"program_head", Token::program_head},
    {"routine", Token::routine},
    {"routine_head", Token::routine_head},
    {"routine_body", Token::routine_body},
    {"sub_routine", Token::sub_routine},
    {"label_part", Token::label_part},
    {"const_part", Token::const_part},
    {"type_part", Token::type_part},
    {"var_part", Token::var_part},
    {"routine_part", Token::routine_part},
    {"const_expr_list", Token::const_expr_list},
    {"const_value", Token::const_value},
    {"type_decl", Token::type_decl},
    {"type_decl_list", Token::type_decl_list},
    {"type_definition", Token::type_definition},
    {"simple_type_decl", Token::simple_type_decl},
    {"array_type_decl", Token::array_type_decl},
    {"record_type_decl", Token::record_type_decl},
    {"name_list", Token::name_list},
    {"field_decl_list", Token::field_decl_list},
    {"var_decl_list", Token::var_decl_list},
    {"var_decl", Token::var_decl},
    {"function_decl", Token::function_decl},
    {"procedure_decl", Token::procedure_decl},
    {"function_head", Token::function_head},
    {"parameters", Token::parameters},
    {"procedure_head", Token::procedure_head},
    {"para_decl_list", Token::para_decl_list},
    {"para_type_list", Token::para_type_list},
    {"var_para_list", Token::var_para_list},
    {"val_para_list", Token::val_para_list},
    {"compound_stmt", Token::compound_stmt},
    {"stmt_list", Token::stmt_list},
    {"stmt", Token::stmt},
    {"non_label_stmt", Token::non_label_stmt},
    {"assign_stmt", Token::assign_stmt},
    {"proc_stmt", Token::proc_stmt},
    {"if_stmt", Token::if_stmt},
    {"repeat_stmt", Token::repeat_stmt},
    {"while_stmt", Token::while_stmt},
    {"for_stmt", Token::for_stmt},
    {"case_stmt", Token::case_stmt},
    {"goto_stmt", Token::goto_stmt},
    {"expression", Token::expression},
    {"expression_list", Token::expression_list},
    {"factor", Token::factor},
    {"args_list", Token::args_list},
    {"else_clause", Token::else_clause},
    {"direction", Token::direction},
    {"case_expr_list", Token::case_expr_list},
    {"case_expr", Token::case_expr},
    {"expr", Token::expr},
    {"term", Token::term}};

Token tokenResolver(std::string name)
{
    if (tokenMap.count(name) == 0)
    {
        return Token::undefined;
    }
    return tokenMap[name];
}

std::string stringResolver(Token token) {
    std::map<std::string, Token>::iterator iter;
    iter = tokenMap.begin();
    while(iter != tokenMap.end()) 
    {
        // std::cout<< ">>> stringResolver: "<< iter->first << std::endl;
        if (iter->second == token) {
            return iter->first;
        }
        iter++;
    }
    return "";
}