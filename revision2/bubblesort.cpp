#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,45,23,51,19,8};

    for(int i=0;i<6;i++){
        for(int j=0;j<(6-i-1);j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}