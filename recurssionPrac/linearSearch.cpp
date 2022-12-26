#include<iostream>
using namespace std;
bool keyPresent(int arr[],int size, int key){
    if(size==0){
        return 0;
    }
    if(arr[0]==key && size>=1){
        return true;
    }
    return keyPresent(arr+1,size-1,key);
}
int main(){
    int arr[5]={1,2,3,4,7};
    cout<<keyPresent(arr,5,5);
return 0;
}