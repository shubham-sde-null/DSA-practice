// Q: peak index in a mountain array
#include<iostream>
using namespace std;
int peakElement(){
 int arr[5]={3,4,5,7,1};
//  int arr[6]={3,4,5,1,1,1};
    int s=0;
    int e=sizeof(arr)/sizeof(arr[0])-1;

    int mid=s+(e-s)/2;

while (s<e){
if(arr[mid]<arr[mid+1]){
    s=mid+1;
}
else{
    e=mid;
}
 mid=s+(e-s)/2;
}
return s;
//we want to find the peak index, not the peak value if you asked peak value then return arr[s]
}
int main(){

cout<<"the peak is this "<<peakElement();
return 0;
}