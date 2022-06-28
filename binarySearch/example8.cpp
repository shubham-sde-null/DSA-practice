#include<iostream>
using namespace std;
bool isPossibleSolution(int arr[],int n,int k, int mid){
int cowCount=1;
//I am starting for the first cow
int lastPos=arr[0];
//I am placing my cow at the first position of array
 for(int i=0;i<n;i++){
        if(arr[i]-lastPos>=mid){
            //Now I have to see, can I place my cow on arr[i], I can only place my cow if the difference of the starting position and the ending position is greater then or equal to mid
            cowCount++;
            //I have to place the next cow, So I am increasing the value of cow because first cow, is placed, now I have to place the second cow.
            if(cowCount==k){
                return true;
            }
            //here whatever the number of cow is given we have to check the condition, if the condition is true, then return true
            lastPos=arr[i];
            //here this statement is used to put the other cow's position
        }
    }
    return false;
}
int main(){
    int k=2;
    int s=0;
    int maxi=-1;
    int arr[4]={1,2,4,5};
    //Here I am using the sorted array, but many times sorted array is not given we have to make the sorted array with the help of stl, and then we proceed further.
    int n=sizeof(arr)/sizeof(arr[0]);
    //since I am not using stl, I am finding the value of n using the total size of array divided by the the size of each element
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    cout<<"the maximum is:"<<maxi;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<e)
    {
    if(isPossibleSolution(arr,n,k,mid)){
        ans=mid;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=(s+e)/2;
    }

return ans;
return 0;
}