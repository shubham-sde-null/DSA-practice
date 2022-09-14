#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,45,23,51,19,8};
    for(int i=1;i<6;i++){
        int current=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>current){
                //shift one place ahead
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}