#include <iostream>
using namespace std;
#include <stack>
void insertAtBottom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int ans = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(ans);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int num = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, num);
}
void print(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << "the values before stack is reversed is:" << endl;
    print(st);
    cout << endl;
    reverseStack(st);
    cout << "the values after stack is reversed is:" << endl;
    print(st);
    ;

    return 0;
}