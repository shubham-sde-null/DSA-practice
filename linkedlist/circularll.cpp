#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

//constructor
Node(int d){
    this->data=d;
    this->next=NULL;
}
~Node(){
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"the removed value is:"<<value<<endl;
}
};
//here using this function what I am going to achieve is first I am going to find that element where I want to add the node, because in circular linked list we don't know from where to start so I using this trick to find that element after which I am going to add the node
void insertNode(Node* &tail, int element,int d){
    //If my list is empty
    if(tail==NULL){
        //make a new node
        Node* newNode = new Node(d);
        //make that node as tail
        tail=newNode;
        //new node's next will point to the same node
        newNode->next=newNode;
    }
    //If my list is not empty
    else{
        Node* current =tail;
        //we will keep on moving the current till we found the element after which we have to insert the node
        while(current->data!=element){
            current=current->next;
        }
        //now once we come after this loop we found the  element and that is represented by the current node
        //once we found that node we have to create a new node
        Node* temp=new Node(d);
        temp->next=current->next;
        current->next=temp;
    }

}
void print(Node* &tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"the list is empty"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
void deleteNode(Node* &tail,int value){
    //if list is empty
    if(tail==NULL){
        cout<<"the list is empty"<<endl;
    }
    //if list is not empty and the value is present in the link list
    else{
        Node* previous=tail;
        Node* current=previous->next;
        //we know that current is one step ahead of previous so we use previous->next for indicating current
        //we are going to move both the previous and next till we found outn our value
        while (current->data!=value){
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
        //if only 1 node is present
        if(current==previous){
            tail=NULL;
        }
        //for more then or equal to 2 nodes
        if(tail==current){
            tail=previous;
        }
        current->next=NULL;
        delete current;

    }
}
int main(){
    Node* tail=NULL;
    //inserting in empty list
    insertNode(tail,5,3);
    print(tail);
    //now we added one node so now my list is not emoty now
    // insertNode(tail,3,5);
    // print(tail);
    // insertNode(tail,5,7);
    // print(tail);
    // insertNode(tail,7,10);
    // print(tail);
    deleteNode(tail,3);
    print(tail);
return 0;
}