#include <iostream>
using namespace std;
#include <stack>
int main()
{
    stack<int> st;
    stack<int> temp;
    int count = 0;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // cout << "the top of stack is:" << st.top() << endl;
    int sizeOfStack = st.size();
    // cout << "the size of stack is:" << sizeOfStack << endl;
    while (count != sizeOfStack / 2)
    {
        int store = st.top();
        temp.push(store);
        st.pop();
        count++;
    }
    // cout << "the top of stack st is:" << st.top() << endl;
    st.pop();
    while (count != 0)
    {
        int store1 = temp.top();
        st.push(store1);
        temp.pop();
        count--;
    }
    cout << "the top of stack is:" << st.top();
    cout << endl;
    cout << "the new size of stack is:" << st.size();

    return 0;
}