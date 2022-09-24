//Q:find the element in a rotated array
#include<iostream>
using namespace std;
int binarySearch(int arr[],int start, int end, int key){
    int s=start;
    int e=end;
    while (s<=e)
    {
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
     else if(arr[mid]>key){
        e=mid-1;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }

    }
    return -1;
}
int getPivot(int arr[],int n){
int s=0;
int e=n-1;
int mid=(s+e)/2;

while (s<e){
if(arr[mid]>=arr[0]){
    s=mid+1;
}
else{
    e=mid;
}
// mid=s+(e-s)/2;
mid=(s+e)/2;
}
return s;
}
int main(){
    int arr[5]={7,9,1,2,3};
    int key=2;
    int pivot=getPivot(arr,5);
    cout<<"the position of the pivot is the "<<pivot<<endl;
    // cout<<binarySearch(arr,0,5,key);
    if(key>=arr[pivot] && key<=arr[4]){
        cout<<"the position of the key is "<< binarySearch(arr,pivot,4,key);
    }
    else{
        cout<<"the position of the key is "<< binarySearch(arr,0,pivot-1,key);
    }
return 0;
}