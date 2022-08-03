#include<iostream>
using namespace std;
#include<vector>
int leftOccurence(vector<int> nums, int key, int n){
    int ans=-1;
    int start=0;
    int end=n;

    while(start<=end){
        int mid=(start+end)/2;
        if(nums[mid]==key){
         ans=mid;
        //  return ans;
         end=mid-1;
    }
    else if(nums[mid]>key){
        end=mid-1;
    }
    else if(nums[mid]<key){
        start=mid+1;
    }

    }

    return ans;
}
int rightOccurence(vector<int> nums, int key, int n){
    int ans=-1;
    int start=0;
    int end=n;

    while(start<=end){
        int mid=(start+end)/2;
        if(nums[mid]==key){
         ans=mid;
        //  return ans;
         start=mid+1;
    }
    else if(nums[mid]>key){
        end=mid-1;
    }
    else if(nums[mid]<key){
        start=mid+1;
    }

    }

    return ans;
}
int main(){
    int result;
    int result1;

// vector<int> nums {1,2,3,3,3,3,5};
vector<int> nums {5};
result=leftOccurence(nums,5,1);
result1=rightOccurence(nums,5,1);
cout<<result<<endl;
cout<<result1<<endl;
return 0;
}