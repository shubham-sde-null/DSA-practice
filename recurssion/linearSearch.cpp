#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    if(size==0){
        return false;
        //if I traversed the whole array and at that moment I found that the array of size becomes 0 then it means the whole array is traversed and element is not found
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
    // linearSearch(arr+1,size-1,key);
    //this is also the same it's shorthand for what I have written at the top
}
int main(){
    int arr[5]={3,5,1,2,6};
    bool ans=linearSearch(arr,5,3);
    if(ans){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present";
    }
return 0;
}