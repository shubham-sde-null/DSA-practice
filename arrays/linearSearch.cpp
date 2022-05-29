
#include<iostream>
using namespace std;
int linearSreach(int array[],int n,int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
        // else{
        //     return -1;
        // }
        //I can't write like this because for loop is running for everthing present in it so our key is at the first location then we will get the correct result i.e 0 but if it's not then the loop will execute else and returns -1 which will be incorrect because we have just travesed the first element and there are other elemtns still left so we have to return -1 outsidet the for loop
    }
     return -1;
}
int main(){

    int n;
    cout<<"enter the length of array:"<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cout<<"enter the key to find on array";
    cin>>key;
    cout<<linearSreach(array,n,key);
    // cout<<"the position of the key is:"<<position;
    return 0;
}
//time complexity will be o(n) because we are traversing the whole array depending on the size of array