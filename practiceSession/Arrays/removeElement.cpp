#include<iostream>
using namespace std;
#include<vector>
int removeElemnts(vector<int> &nums, int target){
    int n=nums.size();
    int last=nums.size()-1;
    int counter=0;
    int final;
    vector<int> temp(n,0);
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            temp[i]=10;
            counter++;
        }
    }

    for(int i=0;i<nums.size();i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<temp.size();i++){
        if(temp[i]==10 && i==temp.size()-1){
            // swap(nums[i],nums[i]);
            break;
        }
        if(temp[i]==10 && temp[last]!=10){
            swap(nums[i],nums[last]);
            cout<<"first condition worked"<<endl;
        }
        if(temp[i]==10 && temp[last]==10){
            while(temp[last]==10){
                last--;
            }
      cout<<"this is last"<<last<<endl;
      swap(nums[i],nums[last]);
       cout<<"second condition worked"<<endl;
      last--;
        }
    }

    // for(int i=0;i<2;i++){
    //     nums.pop_back();
    // }
     for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    // cout<<"the final is:"<<5;
    return n-counter;
}
int main(){
    int ans;
    // vector<int> nums {3,2,2,3};
    // ans=removeElemnts(nums,3);
    vector<int> nums {0,1,2,2,3,0,4,2};
     ans=removeElemnts(nums,2);
     cout<<ans;


return 0;
}