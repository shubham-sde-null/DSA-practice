// here I have to evaluate the expression to true boolean means I have given a string and on that string I will use the MCM conept to get the answer let's see how
#include <iostream>
using namespace std;
#include <unordered_map>
unordered_map<string, int> mp;
#include <vector>
vector<vector<vector<int>>> temp;
int solve(string s, int i, int j, bool isTrue)
{
    // this is the base condition
    if (i > j)
    {
        return false;
    }
    if (i == j)
    {
        if (isTrue == true)
        {
            return s[i] == 'T';
        }
        else
        {
            return s[i] == 'F';
        }
    }
    if (temp[i][j][isTrue] != -1)
    {
        return temp[i][j][isTrue];
    }
    // if the value is not present in the map then I have to caluclate it again
    int ans = 0;
    for (int k = i + 1; k <= j - 1; k = k + 2)
    {
        int LT = -1;
        if (temp[i][k - 1][1] != -1)
        {
            LT = temp[i][k - 1][1];
        }
        else
        {
            LT = solve(s, i, k - 1, 1);
            temp[i][k - 1][1] = LT;
        }
        int LF = -1;

        if (temp[i][k - 1][0] != -1)
        {
            LF = temp[i][k - 1][0];
        }
        else
        {
            LF = solve(s, i, k - 1, 0);
            temp[i][k - 1][0] = LF;
        }
        int RT = -1;
        if (temp[k + 1][j][1] != -1)
        {
            RT = temp[k + 1][j][1];
        }
        else
        {
            RT = solve(s, k + 1, j, 1);
            temp[k + 1][j][1] = RT;
        }
        int RF = -1;
        if (temp[k + 1][j][0] != -1)
        {
            RF = temp[k + 1][j][0];
        }
        else
        {
            RF = solve(s, k + 1, j, 0);
            temp[k + 1][j][0] = RF;
        }

        if (s[k] == '&')
        {
            if (isTrue == true)
            {
                ans = ans + LT * RT;
            }
            else
            {
                ans = ans + LT * RF + LF * RT + LF * RF;
            }
        }
        else if (s[k] == '|')
        {
            if (isTrue == true)
            {
                ans = ans + LT * RT + LT * RF + LF * RT;
            }
            else
            {
                ans = ans + LF * RF;
            }
        }
        else if (s[k] == '^')
        {
            if (isTrue == true)
            {
                ans = ans + LT * RF + LF * RT;
            }
            else
            {
                ans = ans + LT * RT + LF * RF;
            }
        }
    }
    return temp[i][j][isTrue] = ans;
}
int main()
{
    string s = "F&F^F&T";
    int n = s.length();
    temp = vector<vector<vector<int>>>(n, vector<vector<int>>(n, vector<int>(2, -1)));
    int i = 0;
    int j = s.length() - 1;
    bool isTrue = true;
    int ans = solve(s, i, j, 1);
    cout << "the number of possible ways are:" << ans << endl;
    return 0;
}