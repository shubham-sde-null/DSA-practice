#include <iostream>
using namespace std;
bool keyPresent(int arr[], int n, int key)
{
    int lo = 0;
    int hi = n - 1;
    int mid = (lo + hi) / 2;
    while (hi - lo > 1)
    {
        if (arr[mid] < key)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
        mid = (lo + hi) / 2;
    }
    if (arr[lo] == key)
    {
        return true;
    }
    else if (arr[hi] == key)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    bool ans = keyPresent(arr, 5, 10);
    if (ans)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }
    return 0;
}