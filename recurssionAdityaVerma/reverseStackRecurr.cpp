#include <iostream>
using namespace std;
#include <stack>
void insertAtBottom(stack<int> &s, int temp)
{
    if (s.size() == 0)
    {
        s.push(temp);
        return;
    }
    int stop = s.top();
    s.pop();
    insertAtBottom(s, temp);
    s.push(stop);
}
void reverseStack(stack<int> &s)
{
    if (s.size() == 1)
    {
        return;
    }
    int temp = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, temp);
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(1);
    s.push(2);
    s.push(5);
    reverseStack(s);
    cout << "woriking" << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}