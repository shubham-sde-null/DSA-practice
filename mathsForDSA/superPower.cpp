#include<iostream>
using namespace std;
#include<string>
int main(){
 string temp="";
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        string ch=to_string(arr[i]);
        temp=temp+ch;
    }
    int num=stoi(temp);
    cout<<num+10;
return 0;
}