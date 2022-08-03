#include<iostream>
using namespace std;
#include<vector>
int removeElements(vector<int> &nums, int val){
    int tempVal=val;
int last=nums.size()-1;
// int swapN=0;
int gol=0;
for(int i=0;i<nums.size();i++){
    if(nums[i]==tempVal){
gol++;
    }
}

        for(int i=0;i<nums.size();i++){
             if(nums[i]==val && i>=last){
                cout<<"first worked"<<endl;
                break;
            }

        //      if(nums[i]==val && i==nums.size()-1){
        //     // swap(nums[i],nums[i]);
        //     break;
        //     cout<<"first worled"<<endl;
        // }
            if(nums[i]==val && nums[last]!=val){
               swap(nums[i],nums[last]);

               last--;
               cout<<"second worled"<<endl;

            }
            if(nums[i]==val && nums[last]==val){
                while(nums[last]==val){
                    last--;
                }
                swap(nums[i],nums[last]);

                last--;
                cout<<"thirs worled"<<endl;
            }



}
// for(int i=0;i<nums.size();i++){
//     cout<<nums[i]<<" ";
// }
// nums.pop_back();
for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}
cout<<"the total swap is:"<<(nums.size())<<endl;
// cout<<"the total swap is:"<<(swapN);
cout<<"the total swap is:"<<(gol);
// cout<<"the total swap is:"<<(nums.size()-swapN);

  }
int main(){
    int ans;
    // vector<int> nums {3,2,2,3};
    // removeElements(nums,3);
    // vector<int> nums {0,1,2,2,3,0,4,2};
    //  removeElements(nums,2);
    // vector<int> nums {1,2,3,3,3,5,3,6};
    //  removeElements(nums,3);
    vector<int> nums {3,3};
     ans=removeElements(nums,3);

     cout<<"this is what I got"<<ans;
return 0;
}