#include<iostream>
using namespace std;
int peakElement(int arr[], int n){
int s=0;
int e=n-1;
int mid=(s+e)/2;
while(s<e)
{
    if(arr[mid]<arr[mid+1]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=(s+e)/2;
}
return s;
}
int main(){
int arr[6]={3,4,5,7,10,1};
cout<<"the position of peal element is:"<<peakElement(arr,6);


return 0;
}