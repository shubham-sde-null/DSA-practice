#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> temp;
    int result=-1;
    int arr[3][3]={1,4,7,2,5,8,3,6,9};
    int target=7;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp.push_back(arr[i][j]);
        }
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<' ';
    }
    cout<<endl;
    int start=0;
    int end=temp.size()-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(temp[mid]==target){
            result=1;
            break;
        }
        else if(temp[mid]>target){
            end=mid-1;


        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    if(result==1){
        cout<<"the target is present in the matrix"<<endl;
    }
    else{   cout<<"the target is not present"<<endl;}



return 0;
}