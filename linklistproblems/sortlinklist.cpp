// using the floyd cycle to check the loop in the link list
// this problem is remainig I am going to solve it soon
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

void insertAtPosition(Node *&head, int d, int position)
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
    insertAtPosition(head, 10, 2);
    insertAtPosition(head, 20, 3);
    insertAtPosition(head, 10, 4);
    insertAtPosition(head, 20, 5);
    insertAtPosition(head, 10, 6);
    insertAtPosition(head, 30, 7);
    insertAtPosition(head, 40, 8);
    // sortLinkList(head);
    // removeDuplicates(head);
    print(head);
    return 0;
}