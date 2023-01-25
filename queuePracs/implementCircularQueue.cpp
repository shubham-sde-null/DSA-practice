#include <iostream>
using namespace std;
class CircularQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void pushInCircularQueue(int element)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "the queue is full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = element;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = element;
        }
        else
        {
            rear++;
            arr[rear] = element;
        }
    }
    void popInCicularQueue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "the quque is empty" << endl;
        }
        // this means only one element is present in the circular because if there is more then one element then front will never becomes equal to the rear
        else if (front == rear)
        {
            // we want to pop the front elemetn so if we remove teh front element then both the front and the rear wil become equal to the -1
            // we are making the element as -1 if we have popped it out of the queue
            arr[front] = -1;
            front = rear = -1;
        }
        // since we have to do the pop and during pop we increase the front so my front will come back to the start position
        // else if (front == size - 1 && rear != 0)
        // babbar used this logic
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    void frontOfCircularQueue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "the queue is empty" << endl;
        }
        else
        {
            cout << "front of the circular queue is:" << arr[front] << endl;
            ;
        }
    }
    void rearOfCircularQueue()
    {
        if (rear != -1 && front != -1)
        {
            cout << "rear of the circular queue is:" << arr[rear] << endl;
            ;
        }
    }
};
int main()
{
    CircularQueue q(15);
    q.pushInCircularQueue(20);
    q.pushInCircularQueue(30);
    q.pushInCircularQueue(10);
    q.popInCicularQueue();
    q.frontOfCircularQueue();
    q.rearOfCircularQueue();

    return 0;
}