#include<iostream>
using namespace std;
bool sortedArray(int arr[],int size){
if(size==0 || size==1){
    return true;
}
else if(arr[0]>arr[1]){
return true;
}
else {
     return false;
     }
    sortedArray(arr+1,size-1);

}
int main(){
    int arr[4]={1,2,3,4};
    bool ans=sortedArray(arr,4);
    if(ans){
        cout<<"array is soretd"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
return 0;
}