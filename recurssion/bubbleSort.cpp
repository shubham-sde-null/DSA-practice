#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    //we can alsn think as int arr[] to int *arr, and now when array is passed to this function it is passed as arr, which is nothing but the first address of array, so if this fucntion do any alteration to the array then it is going to perform on the same address as the array presnet in main function because of which we get the sorted array without passing the refrence
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}
int main(){
    int arr[5]={2,5,1,6,9};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
cout<<arr[i]<<" ";
    }

return 0;
}