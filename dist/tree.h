#ifndef _TREE_H_

#define _TREE_H_

#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdarg>
#include <iostream>
#include <fstream>

// #include "token.h"

extern char *yytext;
extern int yyrow, yycol;

using namespace std;

class TreeNode
{
public:
    string name;
    string content = "";
    // Token token_name = Token::undefined;
    int row = 0;
    int col = 0;
    TreeNode *first_child;
    TreeNode *next_sibling;
    TreeNode() = default;
    TreeNode(string name);
    TreeNode(string name, string content);
    TreeNode(string name, int num, ...);
    void write_json(string path);
    // Token tokenResolver(string name);

private:
    void traverse(TreeNode *node, ofstream &outfile);
};

#endif
