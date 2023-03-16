// Q:count the number of subset with the given differnce
#include <iostream>
using namespace std;
// void defaultValues(int t[][7], int n, int sum)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < sum; j++)
//         {
//             t[i][j] = -1;
//         }
//     }
// }
// void initializationStep(int t[][7], int n, int sum)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < sum; j++)
//         {
//             if (i == 0)
//             {
//                 t[i][j] = 0;
//             }
//             if (j == 0)
//             {
//                 t[i][j] = 1;
//             }
//         }
//     }
// }
// void printTheArray(int t[][7], int n, int sum)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < sum; j++)
//         {
//             cout << t[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int subsetSum(int t[][7], int n, int sum)
// {
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < sum; j++)
//         {
//         }
//     }
// }
int main()
{
    int sum = 0;
    int arr[4] = {1, 1, 2, 3};
    int n = 4;
    int diff = 1;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i];
    }
    // we have to do the calculation such that we will reduce the question
    // sum(s1)-sum(s2)=diff  eq-1
    // sum(s1)+sum(s2)=summ(arr) eq-2
    // now adding both the equation
    // sum(s1)=diff+sum(arr)/2;
    //  here i will get sum(s1)=4, so now I have to find the total number of subset which will make the sum as 4, because 4-remaining subset value will be always 1
    int newSum = 4;
    int t[n + 1][newSum + 1];
    // this array is used to initlize every thing with -1
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < newSum + 1; j++)
        {
            t[i][j] = -1;
        }
    }
    // defaultValues(t, n, sum);
    // this for loop will initlaize our top down approach
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < newSum + 1; j++)
        {
            if (i == 0)
            {
                t[i][j] = 0;
            }
            if (j == 0)
            {
                t[i][j] = 1;
            }
        }
    }
    // initializationStep(t, n, sum);
    // this array is just used for the printing
    // printTheArray(t, n, sum);
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < newSum + 1; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // here starts the main logic of our problem
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < newSum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < newSum + 1; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    cout << "the total number of count difference is:" << t[n][newSum];
    return 0;
}