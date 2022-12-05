#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> ans;
    int arr[3][3]={2,8,14,4,10,16,6,12,18};
    for(int j=0;j<3;j++){
       if(j&1){
        for(int i=2;i>=0;i--){
            ans.push_back(arr[i][j]);
        }
       }
       else{
        for(int i=0;i<3 ;i++){
            ans.push_back(arr[i][j]);
        }
       }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
return 0;
}