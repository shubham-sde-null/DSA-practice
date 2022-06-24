#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    //it's just used to store the initial value of the key
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
            //i used it here because if we got the result at the mid value then also we have to find other position , because their might be other value on left or the right hand side of the mid
        }
        else if(key>arr[mid]) { //go in right of the mid and serach for the key
            s=mid+1;
        }
        else if (key<arr[mid]){//go in left of the mid and serach for the key
            e=mid-1;
        }
        mid=s+(e-s)/2;
        //since values of e ans s got changed we have to update the value of mid
        // this is for me=> in apna college the mid is written inside the while loop, because of which that code is not required to update the value of mid but over here we have to update the mid since our mid is outside the while
    }
    return ans;
}
int main(){
    int even[5]={
        1,2,3,3,5
    };
    cout<<"the first occurence is "<<firstOccurence(even,5,3)<<endl;
return 0;
}