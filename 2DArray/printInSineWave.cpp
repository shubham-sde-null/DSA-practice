#include<iostream>
using namespace std;
void printInSineWave(int arr[][3], int row, int column){
    for(int j=0;j<column;j++){

        if(j&1){
            //this is for bottom to top, because if j is odd then only i will get true, if it's not true then the else will run which is the even part
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
             for(int i=0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }

    }
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    printInSineWave(arr,3,3);
return 0;
}