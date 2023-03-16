#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        // here I am saying if there is only one element then it is sorted
        return;
    }
    int p = partition(arr, s, e);
}
int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;

    quickSort(arr, 0, n - 1);
    return 0;
}