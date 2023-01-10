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
void delteMidOfLL(Node *&head, int position)
{
    int count = 0;
    Node *previous = NULL;
    Node *current = head;
    while (count != position)
    {
        previous = current;
        current = current->next;
        count++;
    }
    previous->next = current->next;
    current->next = NULL;
    delete current;
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
int getLength(Node *&head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
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
    int middle = (getLength(head) - 1) / 2;
    delteMidOfLL(head, middle);
    print(head);
    cout << endl;
    cout << "the middle of the link list is:" << middle << endl;

    return 0;
}