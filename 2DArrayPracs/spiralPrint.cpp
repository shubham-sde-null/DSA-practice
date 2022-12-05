#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> matrix;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int startColumn=0;
    int endColumn=2;
    int startRow=0;
    int endRow=2;
    int total=9;
    int count=0;
    while(count<total){
        for(int index=startColumn;index<=endColumn && count<total;index++){
            matrix.push_back(arr[startRow][index]);
            count++;
        }
        startRow++;
        for(int index=startRow;index<=endRow && count<total;index++){
            matrix.push_back(arr[index][endColumn]);
            count++;
        }
        endColumn--;
        for(int index=endColumn;index>=startColumn && count<total;index--){
            matrix.push_back(arr[endRow][index]);
            count++;
        }
        endRow--;
        for(int index=endRow;index>=startRow && count<total;index--){
            matrix.push_back(arr[index][startColumn]);
            count++;
        }
        startColumn++;
    }
    for(int i=0;i<matrix.size();i++){
        cout<<matrix[i]<<" ";
    }
return 0;
}