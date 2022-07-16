#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int column){
      for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==target){
                return 1;
            }

        }
    }
    return 0;
}
int main(){
    // int a[3][4]={1,2,4,5,4,7,8,1,2,5,8,9};
    //if I add value like this then they will be printed in ror wise
    int a[3][4];
    cout<<"enter the values in 2d array:"<<endl;
    //this is the row wise input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    // this is the column wise input
    //  for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>a[j][i];
    //         //here what is happening first we are giving j and value of j is keep gettting incremented till 2 and then loop end and then value of i gets incremented and again j's loop start this way we are putting the values in column direction
    //         // a[0][0] a[1][0] a[2][0] a[0][1] a[1][1] a[2][1]  a[0][2] a[1][2] a[2][2] a[0][3] a[1][3] a[2][3]
    //     }
    // }
    //  cout<<"the values in 2d array are:"<<endl;
    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // int r,c;
    // cout<<"enter the row:"<<endl;
    // cin>>r;
    //  cout<<"enter the column:"<<endl;
    // cin>>c;
    // cout<<endl;
    // cout<<"the value at" <<r<<" and" <<c<< "row and first column is:"<<a[r][c];
    int target;
    cout<<"enter the number you want to check present or not in array:"<<endl;
    cin>>target;
    cout<<"the value of taret is:"<<target<<endl;

    isPresent(a, target,3,4)==0 ? cout<<"value is not present": cout<<"value is present";
    //Output using ternary operator

//    if(isPresent(a, target,3,4)){
//     cout<<"element found";
//    }
//    else{
//     cout<<"not found";
//    }
// output using if else



return 0;
}