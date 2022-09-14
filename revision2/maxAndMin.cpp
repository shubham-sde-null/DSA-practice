#include<iostream>
using namespace std;
#include<climits>
int main(){
    int max=INT_MIN;
    int min=INT_MAX;
    int n;
    cout<<"enter the number of elements in array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the maximum is:"<<max<<endl;
    cout<<"the minimum is:"<<min<<endl;


return 0;
}
