#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 1, 5, 3, 4};
    // here I consider the first element as already sorted
    for (int i = 1; i < 5; i++)
    {
        int current = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}