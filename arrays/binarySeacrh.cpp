#include<iostream>
using namespace std;
int binarySearch(int array[],int n, int key){
    int s=0;
    int e=n;
    //here we can use n or n-1 there is nothing going wrong with it becuase in both the case our loop will run till the end
    while(s<=e){
       //here we have given s<=e because we know that if s becomes greater then the e then we know that no key is present in the array and in this case we will return -1
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
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
    cout<<binarySearch(array,n,key)<<endl;
    return 0;
}