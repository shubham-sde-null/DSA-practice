#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>
//find the min value from first row
int minValueOfRow(int arr[][2], int a, int b){
      int min=INT_MAX;
    int index=-1;
       for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
                index=j;
            }
        }
    }
    cout<<"the index is:"<<index<<endl;
    return index;
}
//main function
int main(){
int min=INT_MAX;
int minRowIndex;
int ans=0;
vector<int> temp;
// int arr[3][3]={2,1,3,6,5,4,7,8,9};
int arr[2][2]={1,2,3,4};
// minRowIndex=minValueOfRow(arr,1,3);
minRowIndex=minValueOfRow(arr,1,2);
cout<<"the min row index is:"<<minRowIndex<<endl;
temp.push_back(arr[0][minRowIndex]);
for(int i=1;i<2;i++){
    for(int j=minRowIndex;j<2;j++){
        if(arr[i][j]){
            if(arr[i][j]<min){
                min=arr[i][j];
                minRowIndex=j;
            }
            cout<<"min is:"<<min<<endl;
        }
        if(arr[i][j-1]){
            if(arr[i][j-1]<min){
                min=arr[i][j-1];
                minRowIndex=j-1;
            }
             cout<<"min is:"<<min<<endl;
        }
        if(arr[i][j+1]){
             if(arr[i][j+1]<min){
                min=arr[i][j+1];
                minRowIndex=j+1;
            }
             cout<<"min is:"<<min<<endl;
        }
    }
    temp.push_back(min);
    min=INT_MAX;
}
cout<<"the vector print:"<<endl;
for(int i=0;i<temp.size();i++){
    // ans+=temp[i];
    cout<<temp[i]<<" ";
    ans=ans+temp[i];
}
cout<<"the min path is:"<<ans<<endl;

return 0;
}