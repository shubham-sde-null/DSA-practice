// using the floyd cycle to check the loop in the link list
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
void removeDuplicates(Node *&head)
{
    Node *current = head;

    while (current->next != NULL)
    {
        Node *temp = current;
        while (temp->next != NULL)
        {
            if (current->data == temp->next->data)
            {
                Node *deleteNode = temp->next;
                temp->next = temp->next->next;
                delete deleteNode;
            }
            else
            {
                temp = temp->next;
            }
            // temp = temp->next;
        }
        current = current->next;
    }
}

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
    removeDuplicates(head);
    print(head);
    return 0;
}