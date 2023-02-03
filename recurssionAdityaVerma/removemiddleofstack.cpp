#include <iostream>
using namespace std;
#include <stack>
void removeMiddle(stack<int> &s, int middle)
{
    if (middle == 1)
    {
        s.pop();
        return;
    }
    int temp = s.top();
    // I have to pop the element in order to reduce the size of the stack
    s.pop();
    removeMiddle(s, middle - 1);
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int size = s.size();
    cout << endl;
    int middle = size / 2 + 1;
    // cout << "the middel is:" << middle << endl;
    removeMiddle(s, middle);
    while (!s.empty())
    {
        int temp = s.top();
        cout << temp << " ";
        s.pop();
    }
    return 0;
}