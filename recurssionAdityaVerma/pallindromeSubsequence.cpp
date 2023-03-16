#include <iostream>
using namespace std;
#include <vector>
bool pallindromeOrNot(string str)
{
    int i = 0;
    int j = str.length() - 1;
    int flag = 1;
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            flag = -1;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    if (flag == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
vector<string> getThePallinSubseq(string str, string output, vector<string> &ans, vector<string> &pall)
{
    if (str.length() == 0)
    {
        ans.push_back(output);
        return ans;
    }
    string op1 = output;
    string op2 = output;

    op2.push_back(str[0]);

    if (pallindromeOrNot(op2) && op2.length() >= 1)
    {
        pall.push_back(op2);
    }
    str.erase(str.begin() + 0);
    getThePallinSubseq(str, op1, ans, pall);
    getThePallinSubseq(str, op2, ans, pall);
    return pall;
}
int main()
{
    vector<string> ans;
    vector<string> pall;
    string output = "";
    string str = "aaa";
    getThePallinSubseq(str, output, ans, pall);
    for (auto i : pall)
    {
        cout << i << " ";
    }

    return 0;
}