#include <iostream>
using namespace std;
#include <queue>
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int element)
    {
        this->data = element;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *createBT(Node *root)
{
    int data;
    cout << "enter the data" << endl;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the data for inserting in left:" << data << endl;
    root->left = createBT(root->left);
    cout << "enter the data for inserting in right  of:" << data << endl;
    root->right = createBT(root->right);
    return root;
}
void levelOrderTraveral(Node *&root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {

        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
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
}
int heightOfBT(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = heightOfBT(root->left);
    int right = heightOfBT(root->right);
    int ans = max(left, right) + 1;
    return ans;
}
// void countLeafNode(Node *&root, int &count)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     countLeafNode(root->left, count);
//     if (root->left == NULL && root->right == NULL)
//     {
//         count++;
//     }
//     countLeafNode(root->right, count);
// }
int main()
{
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    Node *root = NULL;
    root = createBT(root);
    levelOrderTraveral(root);
    int height = heightOfBT(root);
    cout << "the heigth of the binary tree is:" << height << endl;
    return 0;
}