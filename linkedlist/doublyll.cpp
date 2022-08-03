#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* previous;
Node* next;

//constructor
Node(int d){
    this->data=d;
    this->previous=NULL;
    this->next=NULL;
}
};
void printNodes(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;

}
//this function is used to get the length of the linked list
int getLengthOfLl(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node* &head, int d){
    // Node*temp=head;
    Node* temp=new Node(d);
    temp->previous=NULL;
    temp->next=head;
    head->previous=temp;
    // head->next=NULL;
    //this step is not necessary, because earlier also head's next was temp
    head=temp;

}
void insertAtTail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->previous=tail;
    tail=temp;
    // temp=tail; If I write like this i.e temp=tail then I won't get my result
    temp->next=NULL;
}
void inserAtPosition(Node* head,Node*tail, int position, int d){

    //inserting at firsy node
    if(position==1){
        insertAtHead(head,d);
        return;
    }
   Node* temp =head;
   int count=1;
   while(count<position-1){
    temp=temp->next;
    count++;
   }
   //inserting at last node
   if(temp->next==NULL){
    insertAtTail(tail,d);
    return;
   }
   Node* nodeToInsert=new Node(d);
   nodeToInsert->next=temp->next;
   temp->next=nodeToInsert;
   temp->next->previous=nodeToInsert;
   temp->next=nodeToInsert;
   nodeToInsert->previous=temp;

}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    printNodes(head);
    // cout<<getLengthOfLl(head);
    insertAtHead(head,25);
    // cout<<endl;
    printNodes(head);
    insertAtTail(tail,355);
    printNodes(head);
    inserAtPosition(head,tail,3,50);
    printNodes(head);


return 0;
}