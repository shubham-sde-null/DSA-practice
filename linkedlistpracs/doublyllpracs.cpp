#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *previous;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->previous = NULL;
        this->next = NULL;
    }
};
int lengthOfLL(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    temp->previous = NULL;
    head->previous = temp;
    head = temp;
}
void insertAtTail(Node *tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->previous = tail;
    tail = temp;
    // below step is not required because my constructor is already making the next null
    temp->next = NULL;
}
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    cout << "hello" << endl;
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
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->previous = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->previous = temp;
}
void printNodes(Node *&head)

{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deleteNode(Node *head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->previous = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *previous = NULL;
        Node *current = head;
        int count = 1;
        while (count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }
        current->previous = NULL;
        previous->next = current->next;
        current->next->previous = previous;
        current->next = NULL;
        delete current;
    }
}
int main()
{
    Node *node1 = new Node(20);
    Node *head = node1;
    Node *tail = node1;
    // cout << "the first node is:" << node1->data << endl;

    insertAtHead(head, 30);
    insertAtTail(tail, 10);
    insertAtPosition(head, tail, 2, 25);
    deleteNode(head, 2);
    printNodes(head);
    int length = lengthOfLL(head);
    cout << "the length of the link list is:" << length;
    return 0;
}