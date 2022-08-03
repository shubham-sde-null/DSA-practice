#include<iostream>
using namespace std;
#include<vector>
int linearSearch(vector<int> nums, int target){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return i;
        }
    }
}
int main(){
    int result;
vector<int> nums {1,2,3,4,5,6,7};
result=linearSearch(nums,4);
cout<<"the position of the target if:"<<result;
return 0;
}