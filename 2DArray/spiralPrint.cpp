// #include<iostream>
// using namespace std;
// void spiralPrint(int arr[][3], int row, int column){
//  for(int i=0;i<row;i++){
//     if(i==0){
//      for(int j=0;j<column;j++){
//         cout<<arr[i][j]<<" ";

//     }
//     }
//     else if(i==1){
//         for(int j=column-1;j>=0;j--){
//             cout<<arr[i][j]<<" ";

//             break;
//         }
//     }
//     else if(i==2){
//         for(int j=column-1;j>=0;j--){
//             cout<<arr[i][j]<<" ";
//             // break;
//         }
//     }
//    }
//    row--;
//    column--;
//    for(int i=1;i<row;i++){

//    for(int j=0;j<column;j++){
//         cout<<arr[i][j]<<" ";
//     }
//    }
// }
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};

// spiralPrint(arr,3,3);
// return 0;
// }
//Just solved using brut force

//Solving using vector of vector
#include<iostream>
using namespace std;
#include<vector>
vector<int> printSpiral(vector<vector<int>> &matrix){
vector<int> ans;
int row=matrix.size();
int column=matrix[0].size();
//we are initalizing count to 0 because we are going to run a while loop where we specify to not go below 0.
int count=0;
//we are going to run oue while loop this many times
int total=row*column;
// index initalization
int startingRow=0;
int startingColumn=0;
int endingRow=row-1;
int endingColumn=column-1;

while (count<total)
{
    //for starting row
    for(int index=startingColumn;index<=endingColumn && count<total;index++){
        //here we ahve to also keep in find that our count does not become greater then total
        ans.push_back(matrix[startingRow][index]);
        //here we are traversing the first row, so we just require startingrow as 0 at this conditon and index is changing from first column to the last column
        count++;
    }
    startingRow++;
    // whenever we will traversew the particular row then we will increment that row such that we don't traverse that row again

    //for ending column
    for(int index=startingRow;index<=endingRow && count<total;index++){
        ans.push_back(matrix[index][endingColumn]);
         count++;
    }
    endingColumn--;
    //here once we traversed the particular column we don't want to traverse that again

    //for printing ending row
    for(int index=endingColumn;index>=startingColumn && count<total;index--){
        ans.push_back(matrix[endingRow][index]);
         count++;
    }
    endingRow--;

    //for printing starting column
    for(int index=endingRow;index>=startingRow && count<total;index--){
            ans.push_back(matrix[index][startingColumn]);
             count++;
    }
    startingColumn++;
}


return ans;
}
int main(){
//this is how vector of vector is defined
vector<vector<int>> arr;
int count=1;
vector<int> answer;

//This is how values are inserted in vector of vector
for(int i=0;i<3;i++){
    //here we required to make one vector whose value will be get stored in our vector
    vector<int> v1;
    for(int j=0;j<3;j++){
        v1.push_back(count);
        count++;
    }
    //here the values are stored in our vector of vector, it's stored in simialr ways like the 2d array, and the way of accessing them is alsio like 2d array
    arr.push_back(v1);
}

//here we are accessing the values of vector of vector
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
//here we will get the answer, since our funcion is returning a vector so we have to use a vector to store the result and we can use for loop to disply our result
answer=printSpiral(arr);
for(int i=0;i<answer.size();i++){
    cout<<answer[i]<<" ";
}
return 0;
}