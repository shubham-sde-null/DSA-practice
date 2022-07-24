#include<iostream>
using namespace std;
#include<vector>
void powerSet(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans ){
    //base case
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    powerSet(nums,output,index+1,ans);
    //incude
    int element=nums[index];
    output.push_back(element);
    powerSet(nums,output,index+1,ans);
}
vector<vector<int>> subSet(vector<int>& nums){
vector<vector<int>> ans;
vector<int> output;
int index=0;
powerSet(nums, output, index, ans);
return ans;
}

int main(){
    vector<int> nums;
    vector<vector<int>> result;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    result=subSet(nums);
     for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
                cout<<result[i][j]<<endl;
        }
        cout<<endl;

    }
return 0;
}