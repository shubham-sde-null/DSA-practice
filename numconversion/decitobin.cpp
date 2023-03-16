#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
int main()
{
    vector<int> temp;
    int n = 14;
    while (n >= 1)
    {
        int rem = n % 2;
        temp.push_back(rem);
        n = n / 2;
    }
    reverse(temp.begin(), temp.end());
    for (auto i : temp)
    {
        cout << i << " ";
    }
    return 0;
}