#include <iostream>
using namespace std;
#include <map>
#include <bits/stdc++.h>
int main()
{
    map<char, int> temp;
    string s = "shubham";
    char ans;
    for (int i = 0; i < s.length(); i++)
    {
        temp[s[i]] = ++temp[s[i]];
    }
    // for (auto i : temp)
    // {
    //     cout << i.first << ":" << i.second << endl;
    // }
    for (auto i : temp)
    {
        cout << i.first << ":" << i.second << endl;
    }
    int max = INT_MIN;
    for (auto i : temp)
    {
        if (i.second > max)
        {
            max = i.second;
            ans = i.first;
        }
    }
    cout << "the maximum occuring charcter is:" << ans << endl;
    return 0;
}