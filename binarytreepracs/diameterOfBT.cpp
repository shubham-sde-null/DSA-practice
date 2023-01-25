#include <iostream>
using namespace std;
#include <queue>
#include <bits./stdc++.h>
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
// this approach will work but the time complexity will be o(n^2) because we are using height function which will again traverse the whole tree
// int diameterOfBT(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int opt1 = diameterOfBT(root->left);
//     int opt2 = diameterOfBT(root->right);
//     int opt3 = heightOfBT(root->left) + heightOfBT(root->right) + 1;
//     int temp = max(opt1, opt2);
//     int ans = max(temp, opt3);
//     return ans;
// }
// now I going to find the width of the binary tree using pair such that the time complexity will be o(n)
pair<int, int> diamterFast(Node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = diamterFast(root->left);
    pair<int, int> right = diamterFast(root->right);
    int opt1 = left.first;
    int opt2 = right.first;
    int opt3 = left.second + right.second + 1;
    pair<int, int> ans;
    int temp1 = max(opt1, opt2);
    ans.first = max(temp1, opt3);
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
int diameterFastWithPair(Node *root)
{

    return diamterFast(root).first;
}
int main()
{
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    Node *root = NULL;
    root = createBT(root);
    levelOrderTraveral(root);
    int height = heightOfBT(root);
    cout << "the heigth of the binary tree is:" << height << endl;
    // int diameter = diameterOfBT(root);
    // cout << "the diameter of the binary trer is:" << diameter << endl;
    int diameter = diameterFastWithPair(root);
    cout << "the diameter of the binary trer is:" << diameter << endl;
    return 0;
}