#include<iostream>
using namespace std;
#include<climits>
int main(){
    int counter=0;
    int final[6];
    int maxLoc=INT_MIN;
    int temp[7];
    int store[7]={0};
    int array[7]={10,7,4,6,8,10,11};
    for(int i=0;i<7;i++){
       for(int j=i;j<i+1;j++){
        if(j==6){
            break;
        }
        int diff=abs(array[j]-array[j+1]);
        temp[i]=diff;
         }

    }
    for(int i=0;i<6;i++){
        store[temp[i]]=++store[temp[i]];
    }
    for(int i=0;i<6;i++){
        if(store[i]>maxLoc){
            maxLoc=i;
        }
    }
    cout<<"the maximum repeating element is:"<<maxLoc<<endl;
    int initialPoint;
    for(int i=0;i<6;i++){
        if(temp[i]==maxLoc){
 initialPoint=i;
 break;
        }
    }

    for(int i=0;i<6;i++){
        if(temp[i]==maxLoc){
            counter++;
        }

    }
    cout<<"the initialPosition is:"<<initialPoint<<endl;
    cout<<"total number of diff is:"<<counter<<endl;
    for(int i=initialPoint;i<=counter+2;i++){
        cout<<array[i]<<endl;
    }




return 0;
}