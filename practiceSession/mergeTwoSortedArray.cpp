#include<iostream>
using namespace std;
#include<vector>
int main(){
 vector<int> arr1;
 vector<int> arr2;
 arr1.push_back(1);
 arr1.push_back(3);
 arr1.push_back(5);
 arr1.push_back(0);
 arr1.push_back(0);
 arr1.push_back(0);
 arr2.push_back(2);
 arr2.push_back(4);
 arr2.push_back(6);
  int i=2;
  int j=2;
  int k=5;
  while(j>=0){
    if(i>=0 && arr1[i]>arr2[j]){
        arr1[k]=arr1[i];
        k--;
        i--;
    }
    else{
        arr1[k]=arr2[j];
        k--;
        j--;
    }
  }
  cout<<"the size of arr1 is:"<<arr1.size()<<endl;
  for(int i=0;i<arr1.size();i++){
    cout<<arr1[i]<<endl;
  }


return 0;
}