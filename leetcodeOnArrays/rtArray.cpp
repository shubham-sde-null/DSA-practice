#include<iostream>
using namespace std;
int main(){
    int array[5]={11,12,13,14,15};
    int temp[5];
    int k=3;
    for(int i=4;i>=0;i--){
        int pos=(i+k)%5;
        temp[pos]=array[i];
        cout<<pos<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<temp[i]<<" ";
    }
return 0;
}