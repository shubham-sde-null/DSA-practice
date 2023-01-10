#include <iostream>
using namespace std;
#include <vector>
void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);
        // backtrack
        // we are doing this step to neutralize the original string because when we will again to toh the first step while doing recurssion we will require "abc", if we don't backtrack our original string which is "abc" will get distorted and our logic of swapping particular charcters will fail
        swap(nums[index], nums[j]);
    }
}
vector<vector<int>> permutation(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}
int main()
{
    vector<int> nums;
    vector<vector<int>> result;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    result = permutation(nums);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    // cout << result.size();
    return 0;
}