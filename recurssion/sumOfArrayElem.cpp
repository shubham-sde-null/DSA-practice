#include<iostream>
using namespace std;
int sumOfArray(int arr[],int size){
    if(size==0){
        return 0;
        //if size if array is zero then the sum will be zero
    }
    if(size==1){
        return arr[0];
        //if the size of element is  then return that element
    }
    int remainigPart=sumOfArray(arr+1,size-1);
    int sum=arr[0]+remainigPart;
return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<sumOfArray(arr,5);
return 0;
}