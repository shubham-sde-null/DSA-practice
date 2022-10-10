#include<iostream>
using namespace std;
int main(){
    int array[8]={0,1,2,2,3,0,4,2};
    int val=2;
    int i=0;
    for(int j=0;j<8;j++){
        if(array[j]=val){
            i=j;
            break;
        }
    }
    cout<<"the first position of val is:"<<val<<endl;
    int start=i;
    for(int j=i;j<8;j++){
        if(array[j]!=val){
            swap(array[i],array[j]);
            i++;
        }
    }
    for(int i=0;i<8;i++){
        cout<<array[i]<<endl;
    }
return 0;
}