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

// this function will show the correct output but the it will not present in form of a tree
//  void levelOrderTraveral(Node *&root)
//  {
//      queue<Node *> q;
//      q.push(root);
//      while (!q.empty())
//      {
//          Node *temp = q.front();
//          q.pop();
//          cout << temp->data << " ";
//          if (temp->left)
//          {
//              q.push(temp->left);
//          }
//          if (temp->right)
//          {
//              q.push(temp->right);
//          }
//      }
//  }

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
void countLeafNode(Node *&root, int &count)
{
    if (root == NULL)
    {
        return;
    }
    countLeafNode(root->left, count);
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    countLeafNode(root->right, count);
}
int main()
{
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    Node *root = NULL;
    root = createBT(root);
    int count = 0;
    levelOrderTraveral(root);
    countLeafNode(root, count);
    cout << "the number of leaf nodes in the tree is:" << count << endl;
    return 0;
}