#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
int main()
{
    int arr2d[2][3] = {{-1, 4, -3}, {-1, 1, 2}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2d[i][j] << " ";
        }
    }
    // int minStamina = INT_MAX;
    // int stamina = 1;
    // int N = 2;
    // int arr1[3] = {-1, 4, -3};
    // int arr2[3] = {-1, 1, 2};
    // vector<int> temp;
    // int traverse[6] = {1, 2, 2, 0, 0, 1};
    // int i = 0;
    // while (i < 3)
    // {
    //     int firstResult = arr1[i];
    //     if (i == 1)
    //     {
    //     }
    //     int counter = 0;
    //     int rest = 0;
    //     while (counter < 2)
    //     {
    //         int res = firstResult * arr2[rest];
    //         temp.push_back(res);
    //         counter++;
    //         rest++;
    //     }
    //     counter = 0;
    //     i++;
    // }
    // cout << temp.size() << endl;
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     if (minStamina > temp[i])
    //     {
    //         minStamina = temp[i];
    //     }
    // }
    // cout << "the minimum stamin is" << minStamina << endl;
    return 0;
}