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
void checkLoopUsingFloyd(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "loop is present" << endl;
            return;
        }
    }
    cout << "loop is not present" << endl;
}
// here i am making the infinite loop in the link list
void makeLoopInfinite(Node *&head, int position)
{
    Node *loopNode = head;
    int pointer = 1;
    while (pointer != position)
    {
        loopNode = loopNode->next;
        pointer++;
    }

    Node *temp = head->next;
    int count = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    // return count;
    temp->next = loopNode;
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
    // makeLoopInfinite(head, 4);
    checkLoopUsingFloyd(head);
    // print(head);
    cout << endl;
    // cout << "the last positon of the last node is:" << positionOfLastNode(head);
    return 0;
}