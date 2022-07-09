#include<iostream>
using namespace std;
string ansReturn(string s){
    string s1="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            break;
        }
        else{
s1.push_back(s[i]);
        }

    }
    return s1;
}
int main(){
    string s="my name";
    string s1;
    cout<<ansReturn(s);



return 0;
}