#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    // constructor to inialize the size of the arr
    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = 0;
        rear = 0;
    }
    // this function will add the element in the queue
    void pushInQueue(int element)
    {
        if (rear == size)
        {
            cout << "the queue is full" << endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }
    // this function will rempove the starting element from the queue
    void popFromQueue()
    {
        if (rear == front)
        {
            cout << "the queue is empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            // I am adding this condition when my front will become equal to the rear, at this point I will make my front and rear to point to the 0 because we are trying to avoid wasting extra space.
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    // this function is used to print the front element of the queue
    void printQueueFront()
    {
        if (front == rear)
        {
            cout << "the queue is empty" << endl;
        }
        else
        {
            cout << arr[front] << endl;
        }
    }
    // this function is going to print the last element in the queue
    void printQueueRear()
    {
        if (front == rear)
        {
            cout << "the queue is empty" << endl;
        }
        if (rear < size)
        {
            cout << arr[rear - 1];
        }
    }
    void isEmpty()
    {
        if (rear == front)
        {
            cout << "the queue is empty" << endl;
        }
        else
        {
            cout << "the queue is not empty" << endl;
        }
    }
};
int main()
{
    Queue q(10);
    q.pushInQueue(20);
    q.pushInQueue(10);
    q.pushInQueue(50);
    q.printQueueFront();
    q.printQueueRear();
    return 0;
}