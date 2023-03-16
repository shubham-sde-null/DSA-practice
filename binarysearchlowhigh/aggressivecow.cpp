#include <iostream>
using namespace std;
#include <bits/stdc++.h>
bool canPlaceCow(int arr[], int m, int n, int mid)
{
    // here I a saying I have placed the first cow at the 0th location so I have to make the cow_count as 1
    //  int cow_count = 1;
    //  int lastPos = arr[0];
    // if I haven't placed the cow at that time my cow_count will be 0 and I am considering the lastposition as -1
    int cow_count = 0;
    int lastPos = -1;
    for (int i = 0; i < n; i++)
    {
        // this lastPos=-1 will only work if I am not taken the first postion of array as the positiion of first cow, otherwise there is no need to write this condition
        if (arr[i] - lastPos >= mid || lastPos == -1)
        {
            cow_count++;
            lastPos = arr[i];
        }
        // this condition is not requried but I am writing because if I don't write then I have to also say true if the placed cows get more then the given cow matlab mujeh 3 cow dalne bol raha hai aur main 3 se jyada cow daal paa raha hoo
        // if (cow_count == m)
        // {
        //     break;
        // }
    }
    // cout << "the cow count is:" << cow_count << endl;
    // this means I have placed all the cows
    if (cow_count == m)
    {
        return true;
    }
    // this means all the cows are not placed
    else if (cow_count < m)
    {
        return false;
    }
    // this means that all the cows are placed along with that some extra cows also get place, but we don't want only give cows to place to work with this I can use if(cow_count==0){
    // break
    // }
    else
    {
        return true;
    }
}
int main()
{
    int n;
    int m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int lo = 0;
    int hi = 1e9;
    int mid = (lo + hi) / 2;
    while (hi - lo > 1)
    {
        if (canPlaceCow(arr, m, n, mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
        mid = (lo + hi) / 2;
    }
    // cout << lo << hi << endl;
    if (canPlaceCow(arr, m, n, hi))
    {
        cout << hi << endl;
    }
    else
    {
        cout << lo << endl;
    }

    return 0;
}