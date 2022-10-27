#include<iostream>
using namespace std;
#include<vector>
#include<climits>
int main(){
int max=INT_MIN;
    string str="abcaabcdeg";
    // vector<int> storeData;
    int array[26];
    for(int i=0;i<26;i++){
        array[i]=0;
    }
    for(int i=0;i<str.length();i++){
        int value=abs('a'-str[i]);

        cout<<value<<" ";
         array[value]=array[++value];
    }
    cout<<endl;
    for(int i=0;i<26;i++){
    if(array[i]>max){
        max=array[i];
    }
    }
    char final='a'-max;
    cout<<"the maximum Occuring charcter is:"<<final<<endl;

return 0;
}