#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,0,3,12};
    int s=0;
    int e=4;
    while(s<e){
        if(arr[s]==0 && arr[e]!=0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else{
            s++;
        }
    }
    // for(int i=0;i<5;i++){
    //     if(arr[s]==0 && arr[e]!=0){
    //         swap(arr[s],arr[e]);
    //         s++;
    //         e--;
    //     }
    //     else{
    //         s++;
    //     }
    // }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}