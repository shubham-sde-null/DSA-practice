#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    // here we will find the total number of elemnts who are smaller then the pivot, because this count is used in placing the position of pivot at correct position
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place pivot at right position
    int pivotIndex = s + count;
    // we are placing the pivot element at it's correct position
    swap(arr[pivotIndex], arr[s]);
    // Now we will satisfy our conditon where we will bring all the elements smller then the pivot to left hand side and all the elements greater then pivot to right hand side
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        // here we just checking if the element is smaller then the pivot the increment i
        while (arr[i] < pivot)
        {
            i++;
        }
        // here we just checking if the element is greater then the pivot then decrement j
        while (arr[j] > pivot)
        {
            j--;
        }
        // here once more we will check whether i and j crossed the pivot or not (it's just for confirmation we will get correct answer even if we don't use if over here, but sometimes we might get wrong answer that's why for safer side we are using this if condition here  )
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}