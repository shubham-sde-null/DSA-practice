#include <iostream>
using namespace std;
#include <bits/stdc++.h>
static int t[10][10];
bool ispallindrome(string s, int i, int j)
{
    int start = i;
    int end = j;
    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return false;
            break;
        }
        start++;
        end--;
    }
    return true;
}
int solve(string s, int i, int j)
{
    if (i > j)
    {
        return 0;
    }
    if (i == j)
    {
        return 0;
    }
    if (ispallindrome(s, i, j))
    {
        return 0;
    }
    if (t[i][j] != -1)
    {
        return t[i][j];
    }
    int mn = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int temp = 1 + solve(s, i, k) + solve(s, k + 1, j);
        if (temp < mn)
        {
            mn = temp;
            t[i][j] = mn;
        }
    }
    return mn;
}
int main()
{
    string s = "nitik";
    memset(t, -1, sizeof(t));
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         cout << t[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int ans = solve(s, 0, 4);
    cout << "the numbr of partition is:" << ans << endl;
    return 0;
}