#include <iostream>
using namespace std;
class Heap
{
public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insertInHeap(int value)
    {
        // when I want to insert the value then the size  will be increased by 1
        size = size + 1;
        // I will make the index as size such that where to enter the value
        int index = size;
        // first I will just add the value later i will do the operation of checking whether it is at correct position or not
        arr[index] = value;
        // here we will keep on comparing till the root node which is present at the 1st position
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                // I also want to update the index because my while loop needs to terminate
                index = parent;
            }
            else
            {
                // if the parent is greater then the child then just return
                return;
            }
        }
    }
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "there is no element to delete" << endl;
        }
        // here I have to swap the first element with the last node and to delete the last node so I just decreased the size such that the last node is not accessible
        arr[1] = arr[size];
        size--;
        // now i have to take the root node to the correct position
        // here I have taken the int as 1 because we have to do the comparion from the node 1
        int i = 1;
        while (i < size)
        {
            int leftIndex = i * 2;
            int rightIndex = i * 2 + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                // i also have to change the i inorder to terminate the while loop
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            /// if everything is correct then don't do anything
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
// here we are going to send the whole array, then we will send the size, and we are also going to send the value from where to start heapifying
void heapify(int arr[], int n, int i)
{
    // initially i am considering that the value at the ith index is the largest
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    // here I using the 1 based indexing so i am using left<=n, if it was 0 based indexing then I would have used left<n
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
    Heap h1;
    h1.insertInHeap(50);
    h1.insertInHeap(55);
    h1.insertInHeap(53);
    h1.insertInHeap(52);
    h1.insertInHeap(54);
    h1.print();
    h1.deleteFromHeap();
    cout << endl;
    h1.print();
    cout << endl;
    // cout << "my heap is working" << endl;
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = 5 / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}