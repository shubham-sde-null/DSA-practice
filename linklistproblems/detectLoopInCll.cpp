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
void makeLoopInfinite(Node *&head)
{
    Node *temp = head->next;
    int count = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    // return count;
    temp->next = head;
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
    makeLoopInfinite(head);
    print(head);
    cout << endl;
    // cout << "the last positon of the last node is:" << positionOfLastNode(head);
    return 0;
}