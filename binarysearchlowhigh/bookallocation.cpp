#include <iostream>
using namespace std;
#include <bits/stdc++.h>
bool isPossible(int arr[], int m, int n, int mid)
{
    int sum = 0;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        // we have to handle this condition becasue if the mid is smaller then the a[i] then I can't do the partitio I have to change my mid that is I have to increase my mid then only I can do the partition
        if (arr[i] > mid)
        {
            return false;
        }
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            count++;
            sum = arr[i];
        }
    }
    if (count > m)
    {
        return false;
    }
    else
    {
        return true;
    }
}
// bool isPossible(int arr[], int m, int n, int mid)
// {
//     int sum = 0;
//     int count = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (sum + arr[i] <= mid)
//         {
//             sum += arr[i];
//         }
//         else
//         {
//             count++;
//             //here this arr[i]>mid is important and it's need to be handled otherwise we will not get the correct result
//             if (count > m || arr[i] > mid)
//             {
//                 return false;
//             }

//             sum = arr[i];
//         }
//     }
//     return true;
// }
int main()
{
    int N;
    int M;
    cin >> N >> M;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }
    int lo = 0;
    int hi = sum;
    int mid = (lo + hi) / 2;
    // no need to handle this cases when I am using the lo and hi method
    if (N == M)
    {
        cout << sum << endl;
    }
    if (N == 1)
    {
        cout << A[0] << endl;
    }
    if (M > N)
    {
        cout << "-1" << endl;
    }
    // from here my binary search is starting
    while (hi - lo > 1)
    {
        if (isPossible(A, M, N, mid))
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
        mid = (lo + hi) / 2;
    }
    // cout << lo << hi << endl;
    if (isPossible(A, M, N, lo))
    {
        cout << lo << endl;
    }
    else if (isPossible(A, M, N, hi))
    {
        cout << hi << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}

// 7 5
// 15 10 19 10 5 18 7

// 11 9
// 13 31 37 45 46 54 55 63 73 84 85
