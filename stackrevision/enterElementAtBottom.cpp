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
    int num = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(num);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << "the top of the stack is:" << st.top() << endl;
    cout << "the size of the stack is:" << st.size() << endl;
    insertAtBottom(st, 10);
    cout << "the size of the stack is:" << st.size() << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    // here i can't apply the for loop because the size is not constant it is changing with the every itereaion a time will come where i and the size will become and the remianig stack elements will not get printed
    // for (int i = 0; i < st.size(); i++)
    // {
    //     cout << "the current size is:" << st.size() << "and i is:" << i << endl;
    //     int data = st.top();
    //     st.pop();
    //     cout << data << endl;
    // }

    return 0;
}