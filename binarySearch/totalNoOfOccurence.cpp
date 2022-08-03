//Q: Find the total number of occurence of element in an array

#include<iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int ans1=-1;
     int mid=s+(e-s)/2;

    while (s<=e)
    {
        if(arr[mid]==key){
            ans1=mid;
            e=mid-1;
        }
        else if (key>arr[mid]){
        s=mid+1;
        }
         else if (key<arr[mid]){
        e=mid-1;
        }
       mid=s+(e-s)/2;
    }
    return ans1;
}
int lastOccurence(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int ans2=-1;
     int mid=s+(e-s)/2;

    while (s<=e)
    {
        if(arr[mid]==key){
            ans2=mid;
            s=mid+1;
        }
        else if (key>arr[mid]){
        s=mid+1;
        }
         else if (key<arr[mid]){
        e=mid-1;
        }
       mid=s+(e-s)/2;
    }
    return ans2;
}
int main(){

int even[7]={1,2,3,3,3,3,5};
int answer1=firstOccurence(even,7,3);
int answer2=lastOccurence(even,7,3);
cout<<"total number of occurence of 3 is  "<<(answer2-answer1)+1;
return 0;
}