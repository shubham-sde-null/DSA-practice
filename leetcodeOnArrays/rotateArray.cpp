#include<iostream>
using namespace std;
#include<vector>
void rotateArrar(vector<int>& v1, int k){
    vector<int> temp(v1.size());
    //why we are using the temp vectir?
    //because if we change the value in v1 iteslf then the value will get overrided and we will not get the correct result
    for(int i=0;i<v1.size();i++){
            temp[(i+k)%v1.size()]=v1[i];
    }
    v1=temp;
    //don't forget to copy the output we got in temp to v1, because in temp vector we are temporarly storing the values of vector and once we get the final result I amm going to copy back the temp vector to my v1.

}
void print(vector<int> v1){
    cout<<"after rotating the result is:"<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
}
int main(){
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(4);
  v1.push_back(5);
  v1.push_back(6);
  v1.push_back(7);
  rotateArrar(v1,3);
  print(v1);
return 0;
}