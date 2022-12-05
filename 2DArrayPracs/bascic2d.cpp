#include<iostream>
using namespace std;
int present(int arr[][4], int target, int row, int column){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the elements in array is:"<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    int target;
    cout<<"enter the value you want to find in array:"<<endl;
    cin>>target;
    int result=present(arr,target,3,4);
    if(result==1){
        cout<<"the target is present in the array"<<endl;
    }
    else{
        cout<<"the target is not present in the array"<<endl;
    }
return 0;
}