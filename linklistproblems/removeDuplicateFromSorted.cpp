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
        if (current->data == current->next->data)
        {
            // here I am storing the node to delete, if I not do this step then my program will get stuck
            Node *nodeToDelete = current->next;
            current->next = current->next->next;

            delete nodeToDelete;

            // let's see what will happen if I don't use the nodeTodelete node to store the current->next

            //  current->next = current->next->next;
            // here the issuse is first I am the making the current to point the current->next->next position and then I deleting it this way it will loose the path of the next nodes

            //  delete current->next;
        }
        else
        {
            current = current->next;
        }
    }
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
    insertAtPosition(head, 10, 2);
    insertAtPosition(head, 20, 3);
    insertAtPosition(head, 20, 4);
    insertAtPosition(head, 20, 5);
    insertAtPosition(head, 30, 6);
    insertAtPosition(head, 30, 6);
    removeDuplicates(head);
    print(head);
    return 0;
}