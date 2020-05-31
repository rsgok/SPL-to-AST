#include "token_tree.h"

// cstr methods

TreeNode::TreeNode(Token name) : name(name)
{
}

TreeNode::TreeNode(Token name, string content) : TreeNode(name)
{
    this->content = content;
}

TreeNode *loadJson(string fileurl)
{
    Json::Value root;
    Json::Reader reader;
    ifstream ifs(fileurl, ios::binary);

    if (reader.parse(ifs, root))
    {
        TreeNode *node = (TreeNode *)new TreeNode;
        buildTree(node, root["data"]);
        return node;
    }
    else
    {
        cerr << "error" << endl;
        return NULL;
    }
}

void buildTree(TreeNode *father, Json::Value data)
{
    father->name = tokenResolver(data["name"].asString()); // transfer string to token
    father->content = data["content"].asString();          // content: string
    father->row = data["row"].asInt();                     // row: int
    father->col = data["col"].asInt();                     // col: int
    // process children
    int children_size = data["children"].size();
    if (children_size == 0)
        father->first_child = NULL; // assgin first_child NULL if no child exists
    cout << "prepare processing children nodes... num: " << children_size << " name: " << data["name"].asString() << endl;
    TreeNode *leftNode = NULL;
    for (Json::Value::ArrayIndex i = 0; i != data["children"].size(); i++)
    {
        // cout << i << endl;
        TreeNode *newNode = (TreeNode *)new TreeNode;
        buildTree(newNode, data["children"][i]);
        if (i == 0)
        {
            // first child
            // assign to their father
            father->first_child = newNode;
        }
        else
        {
            // right child from the leftmost one
            // assign to their left closest one
            leftNode->next_sibling = newNode;
        }
        leftNode = newNode;
    }
    if (leftNode != NULL)
    {
        // the rightmost child
        // assign next_sibling NULL
        leftNode->next_sibling = NULL;
    }
}

void printTree(TreeNode *father, int level)
{
    if (father == NULL)
    {
        return;
    }
    for (int i = 0; i < 3 * level; i++)
    {
        cout << " ";
    }
    string namestr = stringResolver(father->name);
    if (namestr == "undefined")
    {
        namestr = father->content;
    }
    cout << "-- " << namestr;
    if (namestr == "INTEGER" || namestr == "REAL" || namestr == "CHAR" || namestr == "STRING")
    {
        cout << ": " << father->content << endl;
    }
    else
    {
        cout << endl;
    }
    printTree(father->first_child, level + 1);
    printTree(father->next_sibling, level);
}

int main()
{
    cout << "Load syntax tree json data..." << endl;
    TreeNode *node = loadJson("./syntax-tree.json");
    cout << "done!" << endl;
    cout << "---------------printing syntax tree---------------" << endl;
    printTree(node, 0);
    cout << "--------------------------------------------------" << endl;
}