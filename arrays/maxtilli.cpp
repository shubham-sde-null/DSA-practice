#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int arr[6] = {0, -9, 1, 3, -4, 5};
    int mx = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        mx = max(mx, arr[i]);
        cout << "the max till " << i << " is:" << mx << endl;
    }
    return 0;
}