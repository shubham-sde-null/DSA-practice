#include<iostream>
using namespace std;
#include<vector>
int main(){
    int sum=0;
    vector<int> data;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

sum+=arr[i][j];
        }
        data.push_back(sum);
        sum=0;
    }
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }
return 0;
}