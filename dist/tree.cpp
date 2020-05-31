#include "tree.h"

// cstr methods

TreeNode::TreeNode(string name) : name(name), row(yyrow), col(yycol)
{
    // this->token_name = wkk::tokenResolver(name);
}

TreeNode::TreeNode(string name, string content) : TreeNode(name)
{
    this->content = content;
}

TreeNode::TreeNode(string name, int num, ...) : TreeNode(name)
{
    cout << "\nTreeNode multi Node import:" << name << " " << num << endl;
    va_list valist;
    va_start(valist, num);
    if (num > 0)
    {
        TreeNode *temp = va_arg(valist, TreeNode *);
        cout << temp->name << endl;
        this->first_child = temp;
        this->content = "";
        if (num > 1)
        {
            while (--num)
            {
                TreeNode *temp2 = va_arg(valist, TreeNode *);
                cout << temp2->name << endl;
                temp->next_sibling = temp2;
                temp = temp2;
            }
        }
        this->row = first_child->row;
        this->col = first_child->col;
    }
    cout << "--------end--------" << endl;
}

// func methods

void TreeNode::write_json(string path)
{
    ofstream outfile;
    outfile.open(path);
    outfile << "{";
    outfile << "\"data\":";
    traverse(this, outfile);
    outfile << "}";
    outfile.close();
}

void TreeNode::traverse(TreeNode *node, ofstream &outfile)
{
    outfile << "{";
    outfile << "\"name\":\"" << node->name << "\",";
    // outfile << "\"token_name\":" << node->name << ",";
    outfile << "\"content\":\"" << node->content << "\",";
    outfile << "\"row\":" << to_string(node->row) << ",";
    outfile << "\"col\":" << to_string(node->col) << ",";
    outfile << "\"children\":[";
    if (node->first_child)
    {
        traverse(node->first_child, outfile);
    }
    outfile << "]";
    outfile << "}";
    if (node->next_sibling)
    {
        outfile << ",";
        traverse(node->next_sibling, outfile);
    }
}