// basic class implementation
//  #include<iostream>
//  using namespace std;
//  class Node{
//  public:
//  int num=10;
//  };
//  int main(){
//  Node* a=new Node;
//  cout<<a->num;
//  //we also have to free the memory once the variable is used because varable a is dyanmically allocated.
//  delete a;
//  return 0;
//  }

// here we have made a constructor which is taking some value and we are using that value to initalize the member variables
//  #include<iostream>
//  using namespace std;
//  class Node{
//  public:
//  int data;
//  Node* next;
//  Node(int d){
//      this->data=d;
//      this->next=NULL;
//  }
//  };
//  int main(){
//      Node* node1=new Node(10);
//      cout<<node1->data;
//      cout<<endl;
//      cout<<node1->next;
//  return 0;
//  }

// Now we will see how to add the node at the start of the node
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        // what is happening over here is once the scope of node gets over then I will free that node, if I have forget to delete the node explicitly
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "the data of the deleted node is:" << value << endl;
    }
};

// inseting a node
void insertAtHead(Node *&head, int d)
{
    // by doing the below step we have made a node which has some data and the next pointer which is null, because when we do the below step we are calling the constructor and it will give us the output, now we have to insert this node at the head
    Node *temp = new Node(d);
    // I am just checkig whether I am getting the output or not
    // cout<<"this data is coming out of the temp node:"<<temp->data;
    temp->next = head;
    head = temp;
}

// printing the nodes in linklist
void printNodes(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void inserAtPosition(Node *head, Node *tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *nextNode = new Node(d);
    nextNode->next = temp->next;
    temp->next = nextNode;
}
void deleteNode(Node *&head, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int count = 1;
        Node *current = head;
        Node *previous = NULL;
        while (count < position)
        {
            // we have to increase both the previous and the current at the same time
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 30);
    insertAtTail(tail, 50);
    inserAtPosition(head, tail, 2, 45);
    deleteNode(head, 2);
    printNodes(head);

    return 0;
}