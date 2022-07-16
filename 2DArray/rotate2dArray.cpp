#include<iostream>
using namespace std;
#include<vector>
vector<int> rotateImage(vector<vector<int>> matrix){
    int row=matrix.size();
    int column=matrix[0].size();
    vector<int> ans;
    int startingColumn=0;
    int endingColumn=column-1;
    int startingRow=0;
    int enidingRow=row-1;
    int count=0;
    int total=row*column;
    while (count<total)
    {
         for(int index=enidingRow;index>=startingRow && count<total;index--){
        ans.push_back(matrix[index][startingColumn]);
        count++;
    }

    startingColumn++;
    }



    return ans;
}
int main(){
    vector<vector<int>> arr;
    int count=1;
    //inserted the values in our vector of vector
    vector<int> answer;
    for(int i=0;i<3;i++){
        vector<int> v1;
        for(int j=0;j<3;j++){
            v1.push_back(count);
            count++;
        }
        arr.push_back(v1);
    }
    //here we are printing the values inside vector

     for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
     }
     cout<<endl;
     answer=rotateImage(arr);
     for(int i=0;i<answer.size();i++){
       cout<<answer[i]<<" ";
     }




return 0;
}