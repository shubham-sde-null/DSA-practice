#include<iostream>
using namespace std;
int bs(int array[], int n, int key ){
    int s=0;
    int e=n-1;

    while(s<=e){
         int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[10]={2,5,4,6,8,10,1,8,8,3};
    int key=5;
    cout<<bs(arr,10,5);
return 0;
}