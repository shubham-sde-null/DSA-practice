#include<iostream>
using namespace std;
bool isPallindrome(string &str, int s, int e){
    if(s>e){
        return false;
    }
     if(s==e){
    return true;
   }
   if(str[s]!=str[e]){
    return false;
   }

    s++;
    e--;
    return isPallindrome(str,s,e);
   return true;
    }

int main(){
    string str="radar";
    cout<<isPallindrome(str,0,4);
return 0;
}