#include <iostream>
using namespace std;
class TwoStack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;
    TwoStack(int size)
    {
        top1 = -1;
        top2 = size;
        arr = new int[size];
        this->size = size;
    }
    void pushInStack1(int element)
    {
        // yaha par above condtion dekh kar mai yeh samaj sakta hoo ki yaha par 2 space aygi lekin asal mai hota yah hai ki since top is -1 so mujhe ek step extra chalna padta hai
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
        else
        {
            cout << "the stack is underfloe" << endl;
        }
    }
    void pushInStack2(int element)
    {
        // yaha par above condtion dekh kar mai yeh samaj sakta hoo ki yaha par 2 space aygi lekin asal mai hota yah hai ki since top is -1 so mujhe ek step extra chalna padta hai
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
        else
        {
            cout << "the stack is underfloe" << endl;
        }
    }
    void popStack1()
    {
        if (top1 >= 0)
        {
            top1--;
        }
        else
        {
            cout << "the stack is empty" << endl;
        }
    }
    void popStack12()
    {
        if (top2 < size)
        {
            top2++;
        }
        else
        {
            cout << "the stack is empty" << endl;
        }
    }
    int peakOfStack1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            return -1;
        }
    }
    int peakOfStack2()
    {
        if (top2 < size)
        {
            return arr[top2];
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    TwoStack st(10);
    st.pushInStack1(1);
    st.pushInStack1(2);
    st.pushInStack1(3);
    st.pushInStack2(9);
    st.pushInStack2(8);
    st.pushInStack2(7);
    cout << "the peak of the stack 1 is:" << st.peakOfStack1();
    cout << endl;
    cout << "the peak of the stack 2 is:" << st.peakOfStack2();
    return 0;
}