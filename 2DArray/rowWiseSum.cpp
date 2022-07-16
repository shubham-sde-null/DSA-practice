
// Solution of rows sum
#include<iostream>
#include<climits>
using namespace std;
void sumOfRows(int arr[][3], int row, int column){
      int sum[3]={0};
    for(int i=0;i<row;i++){

 for(int j=0;j<column;j++){
         sum[i]+=arr[i][j];
    }

    }
    for(int i=0;i<3;i++){
        cout<<sum[i]<<endl;
    }
}
int rowWithMaxSum(int arr[][3], int row, int column){
      int sum[3]={0};
      int maxi=INT_MIN;
      int rowIndex=-1;
    for(int i=0;i<row;i++){
 for(int j=0;j<column;j++){
         sum[i]+=arr[i][j];
    }

    }
    for(int i=0;i<3;i++){
        if(sum[i]>maxi){
            maxi=sum[i];
            rowIndex=i;
        }
    }
    return rowIndex;

}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    sumOfRows(arr,3,3);
    cout<<"the row which have maximum sum is:"<<rowWithMaxSum(arr,3,3);

return 0;
}

