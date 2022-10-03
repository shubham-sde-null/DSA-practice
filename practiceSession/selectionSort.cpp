#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int array[5]={64,25,12,22,11};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(array[i]>array[j]){
                // swap(array[i],array[j]);
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                 for(int i=0;i<5;i++){
                cout<<array[i]<<" ";
    }
            }
            cout<<endl;
        }
        // cout<<endl;
    }
    // for(int i=0;i<5;i++){
    //     cout<<array[i]<<endl;
    // }
return 0;
}