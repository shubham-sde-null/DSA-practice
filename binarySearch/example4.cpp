#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
int s=0;
int e=n-1;
// int mid=s+(e-s)/2;
int mid=(s+e)/2;
//if I an writing mid as s+e/2 then I am getting the wrong answer, but if I icluded s and e in bracket then I am getting the correct result  (s+e)/2
while (s<e){
if(arr[mid]>=arr[0]){
    s=mid+1;
}
else{
    e=mid;
}
// mid=s+(e-s)/2;
mid=(s+e)/2;
}
return s;
}
int main(){
    int arr[5]={3,8,10,17,1};
    cout<<"the pivot element is " << getPivot(arr,5)<<endl;
return 0;
}