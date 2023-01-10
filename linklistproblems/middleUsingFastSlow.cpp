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
void delteMiddleNode(Node *&head, int middle)
{
    Node *previous = NULL;
    Node *current = head;
    while (current->data != middle)
    {
        previous = current;
        current = current->next;
    }
    cout << "the previous value is:" << previous->data << endl;
    previous->next = current->next;
    current->next = NULL;
    delete current;
}
Node *getMiddle(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    if (head->next->next == NULL)
    {
        return head->next;
    }
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL)
    {
        // since I have to move the fast two time so one time I am moving over here and next time I will check the condition if the next of fast is null or not if it is not null then  only move the fast
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    // return slow;
    return slow;
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
    Node *middleNode = getMiddle(head);
    // Node *previousOfMiddle = getMiddle(head);
    cout << "the middle node is:" << middleNode->data;
    // cout << "the middle node is:" << previousOfMiddle->data;
    delteMiddleNode(head, middleNode->data);
    cout << endl;
    print(head);

    // cout << "the head of the link list is:" << head->data << endl;
    return 0;
}