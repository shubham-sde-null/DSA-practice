#include <iostream>
using namespace std;
#include <queue>
#include <vector>
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "enter the data:" << endl;
    int data;
    cin >> data;
    root = new node(data);
    // if data is -1 then we will return this is the base case for recurssion
    if (data == -1)
    {
        return NULL;
    }
    // here recurssively data is added in the left node, this recurssive call keep on adding the data on the left till we don't find null
    cout << "enter the data for inserting in left:" << data << endl;
    root->left = buildTree(root->left);
    // here recurssively data is added in the right node, this recurssive call keep on adding the data on the right till we don't find null
    cout << "enter the data for inserting in right:" << data << endl;
    root->right = buildTree(root->right);
    return root;
}
// making the functionn to print the level order traversal this is asls called breadth first traversal
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    // we are starting by pushing an element in queue which is the root element at the start
    q.push(root);
    // we are using a seperator for going to the next line, since we know that at level 0 there will be only root element so I am going to put the seperator at the end when particular level is completed here I am using NULL as a seperator
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            // if queue still has some child nodes
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
// inorder, preorder, and postorder traversal
void inOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void preOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
// here I want to change my original node so I am passing the refrence
void buildFromLevelOrder(node *&root)
{

    vector<vector<int>> v1;
    vector<int> tempVector;
    // here we will not put any seperator
    queue<node *> q;
    cout << "enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    tempVector.push_back(root->data);
    v1.push_back(tempVector);
    while (!q.empty())
    {
        // here I am changing the same tree with root node because I have stored the refrence of root node in temp
        node *temp = q.front();
        q.pop();
        cout << "enter left node for:" << temp->data << endl;
        int leftData;
        cin >> leftData;
        // we know that if user entered -1 which equals to null in that case I am not going to insert it in my leftnode
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "enter right node for:" << temp->data << endl;
        int rightData;
        cin >> rightData;
        // we know that if user entered -1 which equals to null in that case I am not going to insert it in my leftnode
        if (rightData != -1)
        { 
            temp->right = new node(rightData);
            q.push(temp->right);
        }
        if (leftData != -1 && rightData != -1)
        {
            tempVector.push_back(temp->left->data);
            tempVector.push_back(temp->right->data);
            v1.push_back(tempVector);
        }
    }
    cout << "here I am printing for the double vector" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1[0].size(); i++)
        {
            cout << v1[i][j] << " ";
        }
    }
}
int main()
{
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = NULL;
    // root=buildTree(root);
    // cout<<"printing the level order traversal:"<<endl;
    // levelOrderTraversal(root);
    // cout<<"inorder traversal is:";
    // inOrder(root);
    // cout<<endl;
    // cout<<"preorder traversal is:";
    // preOrder(root);
    // cout<<endl;
    // cout<<"postorder traversal is:";
    // postOrder(root);
    buildFromLevelOrder(root);
    return 0;
}