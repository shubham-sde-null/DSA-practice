#include<iostream>
using namespace std;
int main(){
    int array[7]={10,1,7,4,8,2,11};
    for(int i=1;i<7;i++){
        int current=array[i];
        int j=i-1;
        for(;j>=0;j--){
            if(array[j]>current){
                array[j+1]=array[j];
            }
            else{
                break;
            }
        }
        array[j+1]=current;
    }
    for(int i=0;i<7;i++){
        cout<<array[i]<<endl;
    }
return 0;
}