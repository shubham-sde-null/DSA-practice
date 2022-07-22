#include<iostream>
using namespace std;
bool checkPallindrome(string &str,int i, int j){
    if(i>j){
        return false;
    }
    if(str[i]!=str[j]){
        return false;
    }
    if(str[i]==str[j]){
        return true;
    }
    i++;
    j--;
    checkPallindrome(str,i,j);
}
int main(){
    string str="radar";
    bool ans=checkPallindrome(str,0,str.length()-1);
    if(ans){
        cout<<"the string is pallindrome";
    }
    else{
        cout<<"the string is not pallindrome";
    }
return 0;
}