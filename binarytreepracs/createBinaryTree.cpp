#include <iostream>
using namespace std;
#include <queue>
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *createBT(Node *root)
{
    // here I am saying if there is no root node then create one root node over here
    cout << "enter the data for the root node:" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    // here I am using the recurssion and the base case is if there is-1 then return NULL
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the data at the left of the tree:" << endl;
    root->left = createBT(root->left);
    cout << "entet the data at the right of the tree:" << endl;
    root->right = createBT(root->right);
    return root;
}
void levelOrderTraversel(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}
void buildFromLevelOrderTraversal(Node *&root)
{
    queue<Node *> q;
    int data;
    cout << "enter the data for the root node" << endl;
    cin >> data;
    root = new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "enter the left data for the" << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout << "enter the rigth data for the" << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    // Node *root = new Node(10);
    // cout << "the data of the root node is:" << root->data << endl;
    Node *root = NULL;
    // root = createBT(root);
    // levelOrderTraversel(root);
    buildFromLevelOrderTraversal(root);

    return 0;
}