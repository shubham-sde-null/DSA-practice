#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s, int e, int k){
    //element not found
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
      //if key is equal to mid key is found
    if(arr[mid]==k){
        return true;
    }
  //if the key if greater then mid, change the start and again call the recurssive function
    if(arr[mid]<k){
       return binarySearch(arr,mid+1,e,k);
    }
      //if the key if smaller then mid, change the end and again call the recurssive function
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