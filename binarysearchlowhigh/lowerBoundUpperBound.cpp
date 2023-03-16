// yaha mujhe lowerbound ka index return karna hai aur lowerbound mai kya hota hai it returns the same value if the element present in the array or the element just greater then the value to find and in case of upperbound we always get the value greater then the given element to find in the array
// here main thing is to find the condition which will eleminate the search space like in the lower bound we don't want values less then the key so we will go ahead of the mid and start from there, and in the case of upperbound we don't want both the value less then or equal to the key and after while loop I have to return what the question is asking to do
#include <iostream>
using namespace std;
int lower_bound(int arr[], int n, int key)
{
    int lo = 0;
    int hi = n - 1;
    int mid = (lo + hi) / 2;
    while (hi - lo > 1)
    {
        if (arr[mid] < key)
        {
            // here why I did this because in lower bound what happens I get the the same value or the value just greater then the key, and that case will be handled by the else part
            lo = mid + 1;
        }
        else
        {
            // here both the values greater and equal to condition is satisfied over here, because if my mid is greater then the key then it means my ans will lie on the left side of the mid including the mid so I am making hi=mid
            hi = mid;
        }
        mid = (lo + hi) / 2;
    }
    // here I will check for the lowerbound condition that is if the value is greater then equal to the key
    if (arr[lo] >= key)
    {
        return lo;
    }
    if (arr[hi] >= key)
    {
        return lo;
    }
    else
    {
        return -1;
    }
}
int upper_bound(int arr[], int n, int key)
{
    int lo = 0;
    int hi = n - 1;
    int mid = (lo + hi) / 2;
    while (hi - lo > 1)
    {
        // yaha par mujhe less then aur equal to wale ko bhi eleminate karna hai mujhe search space se toh uske liye main kya karunga mujhe <= use karna hoga
        if (arr[mid] <= key)
        {
            lo = mid + 1;
        }
        else
        {
            // yaha par hi mera answer ho sakta hai
            hi = mid;
        }
        mid = (lo + hi) / 2;
    }
    // yaha mujhe greater then chahiye
    if (arr[lo] > key)
    {
        return lo;
    }
    if (arr[hi] > key)
    {
        return hi;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[6] = {2, 3, 4, 6, 7, 8};
    int lowBound = lower_bound(arr, 6, 4);
    cout << "the index of the lower bound is:" << lowBound << endl;
    int upperBound = upper_bound(arr, 6, 4);
    cout << "the index of the lower bound is:" << upperBound << endl;

    return 0;
}