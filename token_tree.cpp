#include "token_tree.h"

// cstr methods

TreeNode::TreeNode(Token name) : name(name)
{
}

TreeNode::TreeNode(Token name, string content) : TreeNode(name)
{
    this->content = content;
}

TreeNode::TreeNode(Token name, int num, ...) : TreeNode(name)
{
    // cout << "TreeNode multi Node import:" << name << " " << num << endl;
    va_list valist;
    va_start(valist, num);
    if (num > 0)
    {
        TreeNode *temp = va_arg(valist, TreeNode *);
        // cout << temp->name << endl;
        this->first_child = temp;
        this->content = "";
        if (num > 1)
        {
            while (--num)
            {
                TreeNode *temp2 = va_arg(valist, TreeNode *);
                // cout << temp2->name << endl;
                temp->next_sibling = temp2;
                temp = temp2;
            }
        }
        this->row = first_child->row;
        this->col = first_child->col;
    }
    cout << "--------end--------" << endl;
}

TreeNode *loadJson(string fileurl)
{
    Json::Value root;
    Json::Reader reader;
    ifstream ifs(fileurl, ios::binary);

    if (reader.parse(ifs, root))
    {
        string rootname = root["data"]["name"].asString();
        cout << rootname << endl;

        TreeNode *node = (TreeNode *)new TreeNode(tokenResolver(rootname));
        return node;
    }
    else
    {
        cerr << "error" << endl;
        return NULL;
    }
}

TreeNode *buildTree(TreeNode *father)
{

}

int main()
{
    TreeNode *node = loadJson("./syntax-tree.json");
    // cout << node->name << endl;
}