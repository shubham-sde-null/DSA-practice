#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int current;
    //this will store the sum
    for(int i=0;i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
                current+=array[j];
                cout<<current<<endl;
        }
    }
return 0;
}