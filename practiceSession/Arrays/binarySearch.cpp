#include<iostream>
using namespace std;
#include<vector>
int binarySeacrh(vector<int> nums, int target, int n){
    int start=0;
    int end=n;


    while(start<=end){
        int mid=(start+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        // mid=(start+end)/2;

    }
 return -1;
}
int main(){
  int result;
vector<int> nums {1,2,3,4,5,6,7,8,9,10};
result=binarySeacrh(nums,4,10);
cout<<"the position of the target is:"<<result;
return 0;
}