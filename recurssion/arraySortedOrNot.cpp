#include<iostream>
using namespace std;
bool sortedArray(int arr[],int size){
    bool ans;
if(size==0 || size==1){
    return true;
}
else if(arr[0]>arr[1]){
return false;
}
else {
    ans=sortedArray(arr+1,size-1);

     }

 return ans;
}
int main(){
    int arr[4]={1,1,1,1};
    bool ans=sortedArray(arr,4);
    if(ans){
        cout<<"array is soretd"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
return 0;
}