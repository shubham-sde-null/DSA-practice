#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool isPossible(int array[], int mid, int n, int k){
int pt=1;
int sum=0;
for(int i=0;i<n;i++){
    sum+=array[i];
    if(sum>mid){
        pt++;
        if(pt==k){
            return true;
        }
        sum=array[i];
    }

}
return false;
}
int main(){
    int sum=0;
    int max=INT_MIN;
    int array[5]={2,6,3,4,5};
    for(int i=0;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<5;i++){
        sum+=array[i];
    }
    int s=max;
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=0;
    int k=3;
    while(s<=e){
        if(isPossible(array,  mid, 5, k)==true){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<"the minimum of maximum is:"<<ans<<endl;
return 0;
}