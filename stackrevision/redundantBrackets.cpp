#include <iostream>
using namespace std;
#include <stack>
bool operatorPresent(char ch)
{
    if ((ch == '+') || (ch == '-') || (ch == '*') || (ch = '/'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    stack<int> st;
    string str = "(a+b)";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(' || '+' || '-' || '*' || '/')
        {
            st.push(ch);
        }
        if (ch == ')')
        {
            while (st.top() != '(')
            {
                char ch = st.top();
                st.pop();
                if (operatorPresent(ch))
                {
                    cout << "no redundant brackets" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}