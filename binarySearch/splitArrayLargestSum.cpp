#include <iostream>
using namespace std;
#include <vector>
#include <climits>
bool isPossible(int arr[], int mid, int n, int m)
{
    int sub = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > mid)
        {
            sub++;
            sum = arr[i];
        }
    }
    // here I will return true or flase based on the number of partition if the current partition gets bigger then the number of partition allwoed then I will get false otherwise I will get the true
    return sub <= m;
}
int main()
{
    int min = INT_MAX;
    int max = INT_MIN;
    int arr[5] = {7, 2, 5, 10, 8};
    int split = 2;
    int sumOfArray = 0;
    vector<int> lowest;
    // using the for loop to calculate the min and the max value
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        sumOfArray += arr[i];
    }
    // cout<<"the minimum value in array is:"<<max<<endl;
    // cout<<"the sum is:"<<sumOfArray<<endl;
    int s = max;
    int e = sumOfArray;
    int mid = s + (e - s) / 2;
    int subArray = 0;
    int ans = 0;
    // here I am considering the case when the number of slpits are equals to the number of elements in the array
    if (split == 5)
    {
        return max;
    }
    while (s <= e)
    {
        if (isPossible(arr, mid, 5, 2) == true)
        {
            // here I can directly show the result i.e which one is lowest among the result
            ans = mid;
            // lowest.push_back(mid);
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "the answer is:" << ans << endl;
    // here I am showing all the possible solutions which are coming
    //  for(int i=0;i<lowest.size();i++){
    //      cout<<lowest[i]<<endl;
    //  }
    return 0;
}