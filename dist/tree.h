#ifndef _TREE_H_

#define _TREE_H_

#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdarg>
#include <iostream>
#include <fstream>

#include "token.h"

extern char *yytext;
extern int yyrow, yycol;

using namespace std;

// typedef int Token;

class TreeNode
{
public:
    Token name = undefined;
    string content = "";
    int row = 0;
    int col = 0;
    TreeNode *first_child;
    TreeNode *next_sibling;
    TreeNode() = default;
    TreeNode(Token name);
    TreeNode(Token name, string content);
    TreeNode(Token name, int num, ...);
    void write_json(string path);

private:
    void traverse(TreeNode *node, ofstream &outfile);
};

#endif
