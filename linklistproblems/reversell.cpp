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
};
void insertAtPosition(Node *&head, int position, int d)
{
    Node *current = head;
    int count = 1;
    while (count < position - 1)
    {
        current = current->next;
        count++;
    }
    Node *toInsert = new Node(d);
    toInsert->next = current->next;
    current->next = toInsert;
}
void reverseList(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        // return head;//if the function type is Node at that time I will return the head, but here I am using the void function so I am using the cout
    }
    Node *previous = NULL;
    Node *current = head;
    while (current != NULL)
    {
        Node *forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
    }
    head = previous;
}
void print(Node *&head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtPosition(head, 2, 20);
    insertAtPosition(head, 3, 30);
    reverseList(head);
    print(head);
    return 0;
}