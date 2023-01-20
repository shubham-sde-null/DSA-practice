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
Node *getTheCount(Node *&head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
        }
        if (temp->data == 1)
        {
            oneCount++;
        }
        if (temp->data == 2)
        {
            twoCount++;
        }
        temp = temp->next;
    }
    cout << "the total number of zeroes are:" << zeroCount << endl;
    cout << "the total number of ones are:" << oneCount << endl;
    cout << "the total number of twos are:" << twoCount << endl;
    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }

    return head;
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
    Node *node1 = new Node(0);
    Node *head = node1;
    Node *tail = node1;
    insertAtPosition(head, 1, 2);
    insertAtPosition(head, 0, 3);
    insertAtPosition(head, 2, 4);
    insertAtPosition(head, 0, 5);
    insertAtPosition(head, 1, 6);
    insertAtPosition(head, 2, 7);
    insertAtPosition(head, 1, 8);
    print(head);
    cout << endl;
    Node *newHead = getTheCount(head);
    print(newHead);
    cout << endl;
    // getTheCount(head);
    return 0;
}