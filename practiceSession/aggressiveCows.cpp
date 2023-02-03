#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <vector>
bool isPossible(vector<int> v, int mid, int k)
{
    int cowCount = 1;
    int lastPost = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] - lastPost >= mid)
        {

            cowCount++;
            // even if i return from here then also their will be no issue because our job is the place the second cow and we have  placed it by doing cowCount++, cowCount++ statement says we have placed the cow we can return true, now I have to check can I increase the mid becasue we want the maximium distance
            //  if (cowCount == k)
            //  {
            //      return true;
            //  }
            lastPost = v[i];
        }
    }
    // this statement is saying that if we got value of cowCount greater than or equal to one then return true
    return cowCount = k;
    // return false;
}
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    // cout<<"after sorting"<<endl;
    sort(v.begin(), v.end());
    //  for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    cout << "the max value is:" << max << endl;
    cout << "the min value is:" << min << endl;
    int s = 0;
    int e = max - min;
    // int e = max;
    int mid = s + (e - s) / 2;
    int ans = 0;
    // here k is the number of cows
    int k = 2;
    while (s <= e)
    {
        if (isPossible(v, mid, k) == true)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "the maximum distance between cows is:" << ans << endl;
}