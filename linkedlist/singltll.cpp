#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        cout << "this is empty constructor" << endl;
    }

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {

            delete next;
            this->next = NULL;
        }
        cout << "memory is free for the node with data:" << value << endl;
    }
};

// inserting a node
void insertAtHead(Node *&head, int d)
{
    // cretaing a new node
    Node *temp = new Node(d);
    // here we created a new node and inserted the data inside it
    temp->next = head;
    // since we have to put this node at start so we have to change the address of next and make it point to the head of previous node
    head = temp;
    // now we also have to change the head
}

// printing the nodes or traversing the nodes
void printNodes(Node *&head)
{
    // here we can avoid using reference but I don't want to make copy sso, I am traversing the original linked list itself
    Node *temp = head;
    // for traversing the nodes we will first create a pointer which will initially points to the first node i.e the head
    while (temp != NULL)
    {
        // we will loop till we didn't find the null
        cout << temp->data << " ";
        // here we are printing the data of our node
        temp = temp->next;
        // since we also have to go to the next node so I want to point my temp pointer to next address
    }
    cout << endl;
}
// this function is used to insert the node at the tail
void insertAtTail(Node *&tail, int d)
{
    // here we will add the new node
    Node *temp = new Node(d);
    // here initially tail is the first node, and the address part of first node is NULL, now we are saying that the address of first nodw will hold address of that node which we are adding
    tail->next = temp;
    // Now our tail has changed because we have added new node
    // here this line is saying now the tail is the next of previous tail
    tail = tail->next;
}
// this function is used to add the node at any location
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // we have to handle the situation when we are trying to add at the first position, because using this logic we want the previous node to get the information, but in case of first node there is no previous node
    if (position == 1)
    {
        insertAtHead(head, d);
        // as soon as we have inserted something we have to go out of the loop and come out of this function, that's the reason why we are using return over here
        return;
    }

    // suppose I want to add to node at the 3rd position(it's just to visuiliaze)

    // this is indicating I am at my first node
    Node *temp = head;
    int count = 1;
    // I am using this while loop to go till that point where I want to insert the new node, suppose I want to add at the third position so my while loop must run till count becomes 2, now my temp node came at position 2 and I have to add at the third position, so the next  steps are show below
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // like we were adding at the head similarly we also have to add at the tail as well
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // As soon I have reached at the position where I have to add the node I will create a new node
    Node *nodeToInsert = new Node(d);
    // here In my temp node I have the adderess of the next node, but now I have to add the node after the temp, bu temp already have the address of next node so I am going to use that address and store in nodeToInsert's next
    nodeToInsert->next = temp->next;
    // Now since temp must have the address of new node so I am going to store the address of the new node to the temp node
    temp->next = nodeToInsert;
}

// Now from here on we are going to write the code to delete a node in linked list
void deleteInNode(Node *&head, int position)
{
    if (position == 1)
    {
        // here i am usig the temp node to store the head to make the memory free
        Node *temp = head;
        // by this step we are saying that the head is change now
        head = head->next;
        // here we have deleted the node even though it still holds the address of next node so we are going to make the deleted node's address to next so that we don't get any uneven result;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // here we are going to put two node one will be current and the other will be previous and initially previous node is null because we are starting at the first node
        Node *current = head;
        Node *previous = NULL;
        int count = 1;
        // we will increment our count till we reached just behind the node we want to delete
        while (count < position)
        {
            // we have to keep moving both previous and current till we have reach to that node which we want to delete
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
    // Node *node1=new Node(); this if when we don't add any value in our constructor i.e empty constructor
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1  because at starting both head and tail will point to the same thing
    Node *head = node1;
    // tail pointing to the node1 as well because initually both head and tail will point to the same node
    Node *tail = node1;
    // what happens in print node is we give the head and we keep on changing the temp=temp->next, which will keep going forward and prints till it finds any null a pointer pointing to null
    printNodes(head);
    // inseratahead will keep on adding the nodes from the start
    insertAtHead(head, 12);
    printNodes(head);
    // inserattail will keep on adding the nodes from the back
    insertAtTail(tail, 25);
    printNodes(head);
    insertAtPosition(tail, head, 3, 35);
    printNodes(head);
    deleteInNode(head, 4);
    printNodes(head);

    return 0;
}