#include<iostream>
using namespace std;
bool bs(int arr[],int s, int e, int k){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return bs(arr,mid+1,e,k);
    }
    else{
        return bs(arr,s,mid-1,k);
    }
}
int main(){
    int arr[5]={3,4,5,6,7};
    cout<<bs(arr,0,4,6);
return 0;
}