#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> arr(6,0);
    vector<int> arr2{1,2,3,5};
    for(int i=0;i<arr2.size();i++){
        arr[arr2[i]]=-1;
    }
    arr[0]=-1;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

return 0;
}