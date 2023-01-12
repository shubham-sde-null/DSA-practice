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
Node *reverseKgroups(Node *&head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *currentNext = NULL;
    Node *current = head;
    Node *previous = NULL;
    int count = 0;
    while (current != NULL && count < k)
    {
        currentNext = current->next;
        current->next = previous;
        previous = current;
        current = currentNext;
        count++;
    }
    if (currentNext != NULL)
    {
        head->next = reverseKgroups(currentNext, k);
    }
    return previous;
}
void insertAtPosition(Node *head, int d, int position)
{
    int count = 1;
    Node *current = head;
    while (count < position - 1)
    {
        current = current->next;
        count++;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = current->next;
    current->next = nodeToInsert;
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
    insertAtPosition(head, 20, 2);
    insertAtPosition(head, 30, 3);
    insertAtPosition(head, 40, 4);
    insertAtPosition(head, 50, 5);
    insertAtPosition(head, 60, 6);
    print(head);
    cout << endl;
    // since head is changed so I can't use the old head otherwise I will not get the correct ans.
    Node *newHead = reverseKgroups(head, 2);
    print(newHead);
    cout << "the new head data is :" << newHead->data;
    // cout << "the head of the reversed node is:" << reversedHead->data;

    return 0;
}