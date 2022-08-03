#include<iostream>
using namespace std;
#include<climits>
int main(){
    int n;
    cout<<"enter the number of elements in array:"<<endl;
    cin>>n;
    int array[n]={};
    for(int i=0;i<n;i++){
            cin>>array[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
            cout<<array[i]<<" "<<endl;
    }
    for(int i=0;i<n;i++){
        if(array[i]>maxNo){
            maxNo=array[i];
        }
        if(array[i]<minNo){
                minNo=array[i];
        }
    }
    cout<<"the max number in array is:"<<maxNo<<endl;
    cout<<"the min number in array is:"<<minNo<<endl;


return 0;
}