#include<iostream>
using namespace std;
#include<vector>
void solve(vector<int> nums, vector<int> output, vector<vector<int>>&ans, int index){

if(index>=nums.size()){
    ans.push_back(output);
    return;
}
solve(nums, output, ans, index+1);
int number=nums[index];
output.push_back(number);
solve(nums, output, ans, index+1);
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int>>ans;
    vector<int> output;
    int index=0;
    solve(nums, output, ans, index);
    // cout<<ans[1][0];
    // cout<<endl;
    // cout<<ans[1][1];
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }



return 0;
}