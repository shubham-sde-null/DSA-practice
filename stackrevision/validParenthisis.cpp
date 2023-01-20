#include <iostream>
using namespace std;
#include <stack>
bool match(char top, char ch)
{
    if ((top == '[' && ch == ']') || (top == '(' && ch == ')') || (top == '{' && ch == '}'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool validParenthisis(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '[' || ch == '(' || ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if (match(top, ch))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
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
    string str = "[({})]";
    // stack<char> st;

    // if (validParenthisis(str))
    // {
    //     cout << "the string is valid parenthesis" << endl;
    // }
    // else
    // {
    //     cout << "the string is not a valid parenthisis" << endl;
    // }

    cout << validParenthisis(str);
    return 0;
}