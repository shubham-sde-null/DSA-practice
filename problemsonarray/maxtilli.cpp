#include<iostream>
using namespace std;
int main(){
    int mx=-19999999;
    //we are taking a very small value because we need to comparte and show the result
    int n;
    cout<<"enter the length of array";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,array[i]);
        cout<<"the maximum at "<<i<<" position is "<<mx<<endl;
    }
return 0;
}