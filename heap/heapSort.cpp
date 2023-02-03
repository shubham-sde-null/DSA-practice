#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
    // initially i am considering that the value at the ith index is the largest
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    // since I using the 1 based indexing then I will run my loop till left<=n , if the question was 0 based indexing then i will use left<n
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    // now i am checking whether my largest index is changed or not, if it got changed then I will also check if there is more nodes which can be changed so i will again call the heapify function

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
int main()
{
    // int arr[6] = {-1, 54, 53, 55, 52, 50};
    // int arr[7] = {-1, 60, 20, 40, 70, 30, 10};
    int arr[8] = {-1, 10, 20, 10, 40, 70, 30, 10};
    int size = 7;
    int n = 7;
    for (int i = size / 2; i > 0; i--)
    {
        heapify(arr, size, i);
    }
    while (n > 1)
    {
        swap(arr[n], arr[1]);
        n--;
        heapify(arr, n, 1);
    }

    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}