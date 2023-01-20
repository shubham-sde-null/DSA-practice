#include <iostream>
using namespace std;
#include <stack>
int main()
{
    string str = "shubham";
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }
    string ans = "";
    while (!st.empty())
    {
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}