#include <iostream>
using namespace std;
int findThePivot(int arr[], int n)
{
    int lo = 0;
    int hi = n - 1;
    int mid = (lo + hi) / 2;
    while (hi - lo > 1)
    {
        if (arr[mid] > arr[lo])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
        mid = (lo + hi) / 2;
    }
    if (arr[lo] < arr[hi])
    {
        return arr[lo];
    }
    else
    {
        return arr[hi];
    }
}
int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int ans = findThePivot(arr, 5);
    cout << "the pivot element is:" << ans << endl;

    return 0;
}