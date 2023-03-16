#include <iostream>
using namespace std;
bool presentOrNot(int arr[], int n, int key)
{
    int size = sizeof(arr[n]) / sizeof(arr[0]);
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return true;
        }
        if (key > mid)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}
int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        if (presentOrNot(arr, n, key))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        T--;
    }
    return 0;
}