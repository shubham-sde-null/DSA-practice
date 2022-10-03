#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int array[6]={10,1,7,6,14,9};
    for(int i=0;i<5;i++){
        for (int j=0;j<5-i;j++)
        {
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
        for(int i=0;i<6;i++){
                cout<<array[i]<<" ";
    }
    cout<<endl;

    }
return 0;
}