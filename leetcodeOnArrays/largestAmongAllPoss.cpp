#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool isPossible(int array[], int mid, int n, int part ){
    int inti=1;
    int ans=0;
    for(int i=0;i<5;i++){
        ans+=array[i];
        if(ans<mid){
            inti++;
            ans=array[i];
        }
    }
    return inti <=part;
}
int main(){
    int array[5]={2,6,3,4,5};
    int k=2;
    int part=3;
    int max=INT_MIN;
    int sumOfAll=0;
    for(int i=0;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<5;i++){
        sumOfAll+=array[i];
    }
    int s=max;
    int e=sumOfAll;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(isPossible(array, mid, 5,part)==true){
            ans=mid;
            s=mid+1;
            // e=mid-1;
        }
        else{
            e=mid-1;
            // s=mid+1;
        }
        mid=s+(e-s)/2;
    }
cout<<"the max value is:"<<ans;
return 0;
}