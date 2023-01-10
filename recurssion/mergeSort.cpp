#include <iostream>
using namespace std;
// Here I must send the reference because the same array is changing but I am not using the & sign, because since I am using *arr which is storing the address of the first element of array, if I have used vectot then I have to use the & sign otherwise our main array will not update
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int mainIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
        // mainIndex++;
    }
    //    mainIndex=mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
        // mainIndex++;
    }
    // merge two arrays
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
            // index1++;
        }
        else
        {
            arr[mainIndex++] = second[index2++];
            // index2++;
        }
        // mainIndex++;
    }
    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    if (s >= e)
    {
        return;
    }
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}
int main()
{
    int arr[4] = {4, 2, 3, 1};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}