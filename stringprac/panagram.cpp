#include<iostream>
using namespace std;
#include<vector>
int IndexVal(char ch){
    return ch-'a';
}
bool isParagram(int arr[]){
    for(int i=0;i<26;i++){
        if(arr[i]!=1){
            return 0;
        }
    }
    return 1;
}
int main(){
    string str="thequickbrownfoxjumpsoverthelazydog";
    vector<char> ch(str.begin(),str.end());
    vector<int> result;
    int value;
    int arr[26];

        for(int i=0;i<ch.size();i++){
            int temp=IndexVal(ch[i]);
            arr[temp]=1;
        }
         value=isParagram(arr);
         if(value==1){
            cout<<"the string is paragram"<<endl;
         }
         else{
            cout<<"the string is not paragram"<<endl;
         }
return 0;
}

