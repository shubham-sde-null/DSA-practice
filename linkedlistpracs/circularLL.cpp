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
void insertNode(Node *&tail, int element, int d)
{
    Node *current = tail;
    while (current->data != element)
    {
        current = current->next;
    }
    Node *temp = new Node(d);
    temp->next = current->next;
    current->next = temp;
}
void printNodes(Node *&tail)
{
    Node *temp = tail;
    // I made this condition because during the deletion I am changing the tail and during deleting one node we make the tail as null, so even though the tail is null we are able to print output i.e empty list
    if (tail == NULL)
    {
        cout << "the list is empty" << endl;
    }
    do
    {
        cout << tail->data << endl;
        tail = tail->next;
    } while (tail != temp);
}
void deleteNode(Node *&tail, int value)
{

    if (tail == NULL)
    {
        cout << "the list is empty" << endl;
    }
    else
    {
        Node *previous = tail;
        Node *current = previous->next;
        while (current->data != value)
        {
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
        if (tail == current)
        {
            tail = previous;
        }
        if (previous == current)
        {
            tail = NULL;
        }

        current->next = NULL;
        delete current;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *tail = node1;
    // here the misake was, I was not making the link list circualr I was adding the data, but in our constuctor our node's next is null but it must point back to the same node
    tail->next = node1;
    // cout << node1->data << endl;
    insertNode(tail, 10, 20);
    deleteNode(tail, 10);
    printNodes(tail);
    return 0;
}