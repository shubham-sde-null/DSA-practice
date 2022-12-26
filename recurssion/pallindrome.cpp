#include<iostream>
using namespace std;
bool checkPallindrome(string &str,int s, int e){
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
    bool ans= checkPallindrome(str,s,e);
   return ans;
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