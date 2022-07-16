#include<iostream>
using namespace std;
#include<vector>
bool findingElement(vector<vector<int>> matrix, int target){
    int row=matrix.size();
    int column=matrix[0].size();
    int rowIndex=0;
    int columnIndex=column-1;
    while (rowIndex<row && columnIndex>=0)
    {
        if(matrix[rowIndex][columnIndex]==target){
            return 1;
        }
        else if (matrix[rowIndex][columnIndex]>target)
        {
            columnIndex--;
        }
        else{
            rowIndex++;
        }
    }
    return 0;
}
int main(){
    int a;
    vector<vector<int>> arr;
    for(int i=0;i<3;i++){
        vector<int> v1;
    for(int j=0;j<3;j++){
    cin>>a;
    v1.push_back(a);

}
    arr.push_back(v1);
    }
    //printing the values in vector
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    if(findingElement(arr,52)==1){
        cout<<"target is present";
    }
    else{
        cout<<"target is not present";
    }
return 0;
}