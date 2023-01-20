#include <iostream>
using namespace std;
#include <stack>
class Stack
{
public:
    int size;
    int *arr;
    int top = -1;
    Stack(int size)
    {
        arr = new int[size];
        top = -1;
        this->size = size;
    }
    void pushInStack(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "the stack is overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "the stack is underflow" << endl;
        }
    }
    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "the stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    // this is how to set the stack
    //  stack<int> s;
    //  s.push(5);
    //  s.push(4);
    //  s.push(3);
    //  cout << "thsi size of the stack is:" << s.size() << endl;
    Stack st(5);
    st.pushInStack(1);
    st.pushInStack(2);
    st.pushInStack(3);
    st.pushInStack(4);
    st.pushInStack(5);
    cout << st.peak();
    return 0;
}