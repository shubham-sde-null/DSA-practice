#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
int main()
{
    vector<int> ans;
    vector<int> temp({7, 2, 5, 10, 8});
    for (int i = 0; i < temp.size() - 1; i++)
    {
        vector<int> Arr[2];
        Arr[0].assign(temp.begin(), temp.begin() + i + 1);
        Arr[1].assign(temp.begin() + i + 1, temp.end());
        int sum1 = 0;
        for (auto val : Arr[0])
        {
            sum1 = sum1 + val;
        }
        int sum2 = 0;
        for (auto val : Arr[1])
        {
            sum2 = sum2 + val;
        }
        int maximum = INT_MIN;
        maximum = max(sum1, sum2);
        ans.push_back(maximum);
    }
    int minimum = INT_MAX;
    for (auto val : ans)
    {
        minimum = min(minimum, val);
    }
    cout << "the minimum sum in the largest array is the:" << minimum << endl;
    return 0;
}