//if there is more then one element then we can use only less then, if there exists only one element then we can use less then equal to
#include<iostream>
using namespace std;
#include<vector>
int main(){
    int arr[3][4]={1,3,5,7,10,11,16,20,22,30,34,60};
    int key=16;
    int result=-1;
    vector<int> temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            temp.push_back(arr[i][j]);
        }
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    int s=0;
    int e=temp.size()-1;
    int mid=s+(e-s)/2;
    // cout<<"the start is:"<<e;
    while(s<=e){
        if(temp[mid]==key){

            // cout<<"the key is present"<<endl;
            result=1;
            break;
        }
        else if(key>temp[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }

    if(result==1){
        cout<<"the key is present"<<endl;
    }
    else{
        cout<<"the key is not present"<<endl;
    }
return 0;
}