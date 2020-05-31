#ifndef _TOKEN_TREE_H_

#define _TOKEN_TREE_H_

#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdarg>
#include <iostream>
#include <fstream>

#include "token.h"
#include "json/json.h"

using namespace std;

class TreeNode
{
public:
    Token name = Token::undefined;
    string content = "";
    int row = 0;
    int col = 0;
    TreeNode *first_child;
    TreeNode *next_sibling;
    TreeNode() = default;
    TreeNode(Token name);
    TreeNode(Token name, string content);
};

TreeNode *loadJson(string fileurl);
void buildTree(TreeNode *father, Json::Value data);
void printTree(TreeNode *father, int level);

#endif
