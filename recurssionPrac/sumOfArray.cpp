#include<iostream>
using namespace std;
int sumOfArray(int arr[],int size){
    int sum=0;
    if(size==0){
        return 0;
    }
    else if(size==1){
        return arr[0];
    }
//   int temp=sumOfArray(arr+1,size-1);

  sum=arr[0]+ sumOfArray(arr+1,size-1);
  return sum;
}
int main(){
    int arr[4]={2,4,5,7};
    cout<<sumOfArray(arr,4);
return 0;
}