#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    // since here I am using the subarray which will have minimum two elements in array and they can become the ans, so in this case my ans will be 2, and here I am using the current to store the current calulation length so it will be also 2
    int arr[7] = {10, 7, 4, 6, 8, 10, 11};
    int diff = abs(arr[1] - arr[0]);
    int current = 2;
    int ans = 2;
    for (int i = 2; i < 7; i++)
    {
        if (abs(arr[i] - arr[i - 1]) == diff)
        {
            // if the conditon got satisfied then I am going to increase the length
            current++;
        }
        else
        {
            // if the difference is not same then I have to change the difference and set my current length to 2 again because the minimum length will be 2 in all the case
            diff = abs(arr[i] - arr[i - 1]);
            current = 2;
        }
        ans = max(ans, current);
    }
    cout << "the maxiumum length of the subarray witht the common differnece is:" << ans << endl;
    return 0;
}