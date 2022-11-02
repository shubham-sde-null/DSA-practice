#include<iostream>
using namespace std;
#include<vector>
#include<climits>
int main(){
int max=INT_MIN;
int index=-1;
    string str="abbbbbcaabcdeg";
    // vector<int> storeData;
    int array[26];
    for(int i=0;i<26;i++){
        array[i]=0;
    }
    for(int i=0;i<str.length();i++){
        int value=abs('a'-str[i]);

        cout<<value<<" ";
        array[value]=array[value]+1;
        cout<<"the value of array is"<<array[value]<<endl;
        //  array[value]=array[value]+1;
        //  co
    }
    cout<<endl;
    // for(int i=0;i<26;i++){
    //     cout<<array[i]<<" ";
    // }
    for(int i=0;i<26;i++){
    if(array[i]>max){
        max=array[i];
        index=i;
    }
    }
    // cout<<"the value of max is:"<<max;
    char final='a'+index;
    cout<<"the maximum Occuring charcter is:"<<final<<endl;

return 0;
}