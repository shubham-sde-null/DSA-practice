#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *previous;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->previous = NULL;
        this->next = NULL;
    }

    // destructor for freeying memory
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free at the node with value:" << value << endl;
    }
};
void printNodes(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
// this function is used to get the length of the linked list
int getLengthOfLl(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node *&head, Node *&tail, int d)
{
    // Here I am writing this case because in case my linked list is empty it means there is head and tail are empty so we will create a node which will be considered as head.
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->previous = NULL;
        temp->next = head;
        head->previous = temp;
        // head->next=NULL;
        // this step is not necessary, because earlier also head's next was temp
        head = temp;
    }
}
void insertAtTail(Node *&head, Node *&tail, int d)
{
    // here also we are doing the same thing when our head and tail is empty which means our linked list is empty
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->previous = tail;
        tail = temp;
        // temp=tail; If I write like this i.e temp=tail then I won't get my result
        temp->next = NULL;
    }
}
void inserAtPosition(Node *head, Node *tail, int position, int d)
{

    // inserting at firsy node
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // inserting at last node
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    //    temp->next=nodeToInsert;
    temp->next->previous = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->previous = temp;
}

// deleting the node from head
void deleteAtPosition(int position, Node *&head)
{
    // here we are deleting the first node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->previous = NULL;
        head = temp->next;
        temp->next = NULL;
        // here we are freeying the memory
        delete temp;
    }
    // here we are deleting any node except the last node
    else
    {
        // here we are making two node one is head and the other node is previous of current node which means it is null
        Node *current = head;
        Node *previous = NULL;
        int count = 1;
        while (count < position)
        {
            previous = current;
            current = current->next;
            // here since we have to move both previous and current forward so we will make previous equal to current and current to current->next
            count++;
        }
        current->previous = NULL;
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
    // printNodes(head);
    // here we will get length based on where we have used it, here I will get the length as one, and if I have used it below insertAtHead I will get the length as 2
    cout << getLengthOfLl(head);
    cout << endl;
    insertAtHead(head, tail, 25);
    // cout<<endl;
    // printNodes(head);
    insertAtTail(head, tail, 355);
    // printNodes(head);
    inserAtPosition(head, tail, 3, 50);
    printNodes(head);
    // deleteAtPosition(1, head);
    // printNodes(head);
    // deleteAtPosition(2, head);
    // printNodes(head);
    // deleteAtPosition(2, head);
    // printNodes(head);

    return 0;
}