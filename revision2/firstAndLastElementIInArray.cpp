#include<iostream>
using namespace std;
int firstOccurence(int array[],int n, int key){
    int s=0;
    int e=n-1;
    // int mid=s+(e-s)/2;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(array[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>array[mid]){
            s=mid+1;
        }
        else if(key<array[mid]){
            e=mid-1;
        }
    //    mid=s+(e-s)/2;
       mid=(s+e)/2;
    }
 return ans;
}
int lastOccurence(int array[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        if(array[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else if(array[mid]<key){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
    pair<int,int> p;
    int array[7]={1,2,3,3,3,3,5};
    // int s=0;
    // int e;
    // int mid=(s+e)/2;
    // e=mid;
    p.first=firstOccurence(array,7,3);
    p.second=lastOccurence(array,7,3);
    cout<<p.first<<endl;
    cout<<p.second<<endl;


return 0;
}