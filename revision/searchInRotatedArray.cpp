#include<iostream>
using namespace std;
int pivot(int array[], int n){
  int s=0;
  int e=n-1;
  int mid=(s+e)/2;
  while(s<e){
    if(array[mid]>=array[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=(s+e)/2;
  }
  return s;
}
int main(){
    int array[5]={7,9,1,2,3};
    cout<<"the pivot element's location is:"<<pivot(array,5);
return 0;
}