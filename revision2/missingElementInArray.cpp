#include<iostream>
using namespace std;
#include<vector>
int main(){
int temp[6];
int array[5]={1,2,3,5};
for(int i=0;i<5;i++){
    temp[i]=0;
}
//setting the values to 0
// for(int i=0;i<6;i++){
//     cout<<temp[i]<<endl;
// }
for(int i=0;i<=5;i++){
    temp[array[i]]=-1;
}
// just for printing the values
// cout<<"updated array"<<endl;
// for(int i=0;i<6;i++){
//     cout<<temp[i]<<endl;
// }
for(int i=0;i<6;i++){
    if(temp[i]!=-1){
        cout<<"the missing value is:"<<i<<endl;
    }
}

return 0;
}