//I got the answer but this is done using linear search , I wanted to use binary search
#include<iostream>
using namespace std;
#include<vector>
int findingInArray(vector<vector<int>> matrix,int target){
    int row=matrix.size();
    int column=matrix[0].size();
    int start=0;
    int end=row*column-1;
    int mid=(start+end)/2;
    int total=row*column;
    int counter=0;
    while (start<=end && counter<total)
    {
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                     if(matrix[i][j]==target){
                        return column*i+j;
                     }
                     else if(mid>target){
                        end=mid-1;
                        counter++;
                     }
                     else{
                        start=mid+1;
                        counter++;
                     }
            }
        }

    }
 return -1;
}
int main(){
vector<vector<int>> arr;
int answer;
 int count=1;
for(int i=0;i<3;i++){
    vector<int> v1;

    for(int j=0;j<4;j++){
            v1.push_back(count);
            count++;
    }
    arr.push_back(v1);
}
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
}
cout<<endl;
answer=findingInArray(arr,11);
if(answer!=-1){
    cout<<"the target is present at:"<<answer<<endl;
}
else{
    cout<<"target is not present in array";
}
}