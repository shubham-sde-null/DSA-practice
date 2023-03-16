// print the longest common subsequence
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int LCS(string a, string b, int m, int n)
{
    string temp = "";
    int t[m + 1][n + 1];
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            t[i][j] = 0;
        }
    }
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (a[i - 1] == b[i - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i][j - 1], t[i - 1][j]);
            }
        }
    }
    int i = m;
    int j = n;
    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            temp.push_back(a[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (t[i][j - 1] > t[i - 1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    reverse(temp.begin(), temp.end());
    cout << "the resultant string is:" << temp << endl;
    return t[m][n];
}
int main()
{
    string a = "acbcf";
    string b = "abcdaf";
    int m = a.length();
    int n = b.length();
    cout << "the longest common subsequence is:" << LCS(a, b, m, n);
    return 0;
}