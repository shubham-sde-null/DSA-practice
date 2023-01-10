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
void insertAtPosition(Node *head, int d, int position)
{
    // I not handling this case if there is no node in the link list, because I am making a node which is the heas as well as the tail
    //  if(head==NULL){
    //      Node* node1=new Node(d);
    //  }
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
    print(head);
    cout << endl;
    cout << "the length of the link list is:" << getLength(head);
    cout << endl;
    cout << "the middle of the ll is:" << (getLength(head) / 2) + 1;

    return 0;
}