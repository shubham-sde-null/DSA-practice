#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    bool ans=false;
    if(size==0 || size==1){
        return true;
    }
    else if(arr[0]>arr[1]){
        return false;
    }
    else{
     ans=isSorted(arr+1,size-1);
    }
    return ans;
}
int main(){
    int arr[4]={1,2,3,4};
    cout<<"is sorted:"<<isSorted(arr,4);
return 0;
}