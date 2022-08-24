#include<iostream>
using namespace std;
#include<queue>
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
    };
    node* buildTree(node *root){
        cout<<"enter the data:"<<endl;
        int data;
        cin>>data;
        root=new node(data);
        //if data is -1 then we will return this is the base case for recurssion
        if(data==-1){
            return NULL;
        }
        //here recurssively data is added in the left node, this recurssive call keep on adding the data on the left till we don't find null
        cout<<"enter the data for inserting in left:"<<data<<endl;
        root->left=buildTree(root->left);
        //here recurssively data is added in the right node, this recurssive call keep on adding the data on the right till we don't find null
        cout<<"enter the data for inserting in right:"<<data<<endl;
        root->right=buildTree(root->right);
        return root;
    }
    //making the functionn to print the level order traversal this is asls called breadth first traversal
    void levelOrderTraversal(node* root){
        queue<node*> q;
        //we are starting by pushing an element in queue which is the root element at the start
        q.push(root);
        //we are using a seperator for going to the next line, since we know that at level 0 there will be only root element so I am going to put the seperator at the end when particular level is completed here I am using NULL as a seperator
        q.push(NULL);
        while (!q.empty())
        {
            node* temp =q.front();

            q.pop();
            if(temp==NULL){
                cout<<endl;
                //if queue still has some child nodes
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            }
        }

    }
int main(){
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root=NULL;
    root=buildTree(root);
    cout<<"printing the level order traversal:"<<endl;
    levelOrderTraversal(root);

return 0;
}