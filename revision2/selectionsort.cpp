#include<iostream>
using namespace std;
int main(){
    int count=0;
    int arr[6]={12,45,23,51,19,8};
    for(int i=0;i<5;i++){
        count++;
        for(int j=i+1;j<6;j++){
            if(arr[j]<arr[i]){
                // swap(arr[i],arr[j]);
                // int temp=arr[j];
                // arr[i]=temp;
                // arr[j]=arr[i];

                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<count;
return 0;
}