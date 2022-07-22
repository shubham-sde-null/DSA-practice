#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s, int e, int k){
    if(s>e){
        return false;
    }
    //element not found

    int mid=(s+e)/2;
    if(arr[mid]==k){
        return true;
    }
    //if key is equal to mid key is found
    if(arr[mid]<k){
       return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=18;
    bool ans=binarySearch(arr,0,5,14);
    if(ans){
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }
return 0;
}