#include<iostream>
using namespace std;
void merge(int arr[],int s, int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    //here we are finiding the length of first array to make the array
    int len2=e-mid;
    //here we are finiding the lenth of second array to make the array
    int *first=new int[len1];
    int *second=new int[len2];
    //here we created the two array dynamically

    //copy the value of main array's first half in new array, because we are splitting the array in two parts
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k];
    k++;
    }
    //copy the value of main array's second part in new array, because we are splitting the array in two parts
    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k];
        k++;
    }

    //merge two sorted arrays
    int index1=0;
    int index2=0;
    int mainArrayIndex=s;
   while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[mainArrayIndex]=first[index1];
        mainArrayIndex++;
        index1++;
    }
    else{
        arr[mainArrayIndex]=second[index2];
        mainArrayIndex++;
        index2++;
    }
   }
   while(index1<len1){
 arr[mainArrayIndex]=first[index1];
        mainArrayIndex++;
        index1++;
   }
   while(index2<len2){
 arr[mainArrayIndex]=second[index2];
        mainArrayIndex++;
        index2++;
   }
   delete []first;
   delete []second;
   //we have used dynamic memory we have to free the memory explicityly
}
void mergeSort(int arr[],int s, int e){
    int mid=(s+e)/2;
    //base case
    if(s>=e){
        return;
    }
    // left part sort
    mergeSort(arr,s,mid);
    //right part sort
    mergeSort(arr,mid+1,e);
    //merge the two sorted arrays
    merge(arr,s,e);

}
int main(){
    int arr[5]={2,5,1,6,9};
    int n=5;
    //  cout<<"working";
    mergeSort(arr,0,n-1);
    //we will send the array, the starting index and the endinging index, because we have to find the mid to split the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

return 0;
}