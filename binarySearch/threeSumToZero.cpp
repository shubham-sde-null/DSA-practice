#include<iostream>
using namespace std;
#include<vector>
vector<vector<int>> threeSum(vector<int> &nums){
    vector<vector<int>> final;

    for(int i=0;i<nums.size();i++){
         vector<int> temp;
        for(int j=i+1;j<nums.size();j++){
            for(int k=i+2;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                            temp.push_back(nums[i]);
                            temp.push_back(nums[j]);
                            temp.push_back(nums[k]);
                    }
                    final.push_back(temp);
            }
        }
    }
    return final;
}
int main(){
    vector<vector<int>> result;
    vector<int> nums {-1,0,1,2,-1,-4};
    result=threeSum(nums);
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            cout<<result[i][j];
        }
        cout<<endl;
    }
    return 0;
}