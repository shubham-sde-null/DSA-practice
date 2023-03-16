#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
int main()
{
    vector<int> negnum;
    vector<int> posnum;
    int sumOfNgNum = 0;
    int sumOfPsNum = 0;
    int mn = INT_MAX;
    vector<int> temp;
    // int arr[6] = {2, -1, 0, 4, -2, -9};
    int arr[8] = {76, 8, 45, 20, 74, 84, 28, 1};
    // int arr[4] = {1, 6, 11, 5};
    // int arr[4] = {3, 9, 7, 3};
    // int arr[3] = {-1, -3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int range = 0;
    for (int i = 0; i < n; i++)
    {
        range += arr[i];
    }
    if (range == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                negnum.push_back(arr[i]);
            }
            else
            {
                posnum.push_back(arr[i]);
            }
        }
        for (int i = 0; i < negnum.size(); i++)
        {
            sumOfNgNum += negnum[i];
        }
        for (int i = 0; i < posnum.size(); i++)
        {
            sumOfPsNum += posnum[i];
        }

        cout << "the sum of the negative number is:" << sumOfNgNum << endl;
        cout << "the sum of the negative number is:" << sumOfPsNum << endl;
        cout << "the final answer is:" << sumOfPsNum - sumOfNgNum;
        return sumOfPsNum - sumOfNgNum;
    }
    for (int i = 0; i < negnum.size(); i++)
    {
        cout << negnum[i] << " ";
    }
    cout << endl;
    if (range < 0)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = -1 * arr[i];
        }
    }
    range = 0;
    for (int i = 0; i < n; i++)
    {
        range = range + arr[i];
    }
    // from here I am going to write my matrix

    bool t[n + 1][range + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < range + 1; j++)
        {
            if (i == 0)
            {
                t[i][j] = false;
            }
            if (j == 0)
            {
                t[i][j] = true;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < range + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i][j - arr[i - 1]] || t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    for (int i = n; i < n + 1; i++)
    {
        for (int j = 0; j <= range / 2; j++)
        {
            if (t[i][j] == true)
            {
                temp.push_back(j);
            }
        }
    }
    // this is used to find the number of elements for the subset in the half matrix
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < temp.size(); i++)
    {
        mn = min(mn, range - 2 * temp[i]);
    }
    cout << "the minimum value is:" << mn << endl;
    return 0;
}