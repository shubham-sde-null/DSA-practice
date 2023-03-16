#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        // here I got the whole array
        for (int i = 0; i < n; i++)
        {
            // int value;
            // cin >> value;
            // A[i] = value;
            cin >> A[i];
        }
        int counter = 0;
        for (int i = 1; i < n; i++)
        {
            bool swapped = false;
            for (int j = i - 1; j >= 0; j--)
            {
                if (A[j] > A[j + 1])
                {

                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                    swapped = true;
                }
            }
            if (swapped == true)
            {
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}