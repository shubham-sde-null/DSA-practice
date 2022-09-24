#include<iostream>
using namespace std;
int minimumVlaue(int array[], int n){
    int s=0;
    int e=n-1;

    //here we are making a variable to store the result, and we are considering the 0th value as minimum value
    int result=array[0];
    while(s<=e){
        //this is the case if my array is already sorted or got sorted
        if(array[s]<array[e]){
            result=min(result,array[s]);
            break;
        }
        // we will consider the array[mid] as the minimum element if we get anything smaller then the result we will change the value of our result and then we will we return our result
        int mid=s+(e-s)/2;
        result=min(result, array[mid]);
        if(array[mid]>=array[s]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}
int main(){
    int array[4]={11,13,15,17};
    cout<<minimumVlaue(array,4);
return 0;
}