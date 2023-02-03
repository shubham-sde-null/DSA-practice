#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int sortArray(int arr[], int size)
{
    if (size == 1)
    {
        return arr[size];
    }
    int res = sortArray(arr, size - 1);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int arr[4] = {1, 10, -1, 5};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    sortArray(arr, 4);
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}