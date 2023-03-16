#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
bool isArithmetic(vector<int> &temp)
{
    sort(temp.begin(), temp.end());
    if (temp.size() == 2)
    {
        return true;
    }
    int df = temp[1] - temp[0];
    for (int i = 2; i < temp.size(); i++)
    {
        if (abs(temp[i] - temp[i - 1]) != df)
        {
            return false;
        }
    }
    cout << "this is one:" << df << endl;
    return true;
}
int main()
{
    // vector<int> temp({4, 6, 5, 9, 3, 7});
    vector<int> temp({-12, -9, -3, -12, -6, 15, 20, -25, -20, -15, -10});
    // vector<int> l({0, 0, 2});
    // vector<int> r({2, 3, 5});
    vector<int> l({0, 1, 6, 4, 8, 7});
    vector<int> r({4, 4, 9, 7, 9, 10});

    int length = l.size();
    vector<int> temp2;
    vector<int> temp3;
    vector<int> temp4;
    vector<int> store[length];
    for (int i = 0; i < l.size(); i++)
    {
        store[i].assign(temp.begin() + l[i], temp.end() - (temp.size() - 1 - r[i]));
    }
    // copy(store[0].begin(), store[0].end(), back_inserter(temp2));
    // temp2.assign(temp.begin() + l[0], temp.end() - (temp.size() - 1 - r[0]));
    // temp3.assign(temp.begin() + l[1], temp.end() - (temp.size() - 1 - r[1]));
    // temp4.assign(temp.begin() + l[2], temp.end() - (temp.size() - 1 - r[2]));
    // for (auto val : store)
    // {
    //     for (auto val2 : val)
    //     {
    //         cout << val2 << " ";
    //     }
    //     cout << endl;
    // }
    for (auto val : store[0])
    {
        cout << val << " ";
    }
    vector<bool> results;
    for (int i = 0; i < length; i++)
    {
        bool tempres = isArithmetic(store[i]);
        results.push_back(tempres);
    }
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i];
    }

    return 0;
}