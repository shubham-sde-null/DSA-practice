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
bool llCircularOrNot(Node *&head)
{

    if (head->next == NULL)
    {
        return false;
    }
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return false;
    }
    if (temp == head)
    {
        return true;
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
{ // here I am making a special conditon for a circular loop with only one node, it's just the temporary solution this print function not work if there is more then one node in the circular link list
    if (head->next == head)
    {
        cout << head->data;
        return;
    }
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
    // here i am making the list circular by pointing it to the same node
    node1->next = node1;
    // insertAtPosition(head, 20, 2);
    // insertAtPosition(head, 30, 3);
    print(head);
    cout << endl;
    cout << llCircularOrNot(head);
    return 0;
}