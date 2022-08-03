#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> ans(nums.size()+1,0);
        int n=nums.size()+1;
        int array[n];
        int final;
        for(int i=0;i<n;i++){
            array[i]=0;
        }
        //here first I made an array and inserted everything with 0

        for(int i=0;i<nums.size();i++){
            array[nums[i]]=1;
            //Now whatever the values I have in my nums, I used those values as index for my array and placed 1 over there earlier they all initalized with 0
        }
        for(int i=0;i<ans.size();i++){
            if(array[i]!=1){
                //here I am checking if anything is not equalt to 1, which means that value is no present in array.
                final=i;
            }
        }

       return final;
    }
};
int main(){
    Solution s1;
    // vector<int> nums {3,0,1};
    vector<int> nums {9,6,4,2,3,5,7,0,1};
    cout<<s1.missingNumber(nums);

return 0;
}