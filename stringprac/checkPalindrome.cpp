#include<iostream>
using namespace std;
#include<vector>
char lowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool palindrome(vector<char> ch){
    int s=0;
    int e=ch.size()-1;
    while (s<=e)
    {
        if(lowerCase(ch[s])!=lowerCase(ch[e])){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    vector<char> ch;
    ch.push_back('M');
    ch.push_back('a');
    ch.push_back('l');
    ch.push_back('A');
    ch.push_back('y');
    ch.push_back('a');
    ch.push_back('L');
    ch.push_back('a');
    ch.push_back('m');
    int size=ch.size();
    int s=0;
    int e=size-1;
    int flag=0;
    int value=palindrome(ch);
    if(value==1){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not a paliindrome"<<endl;
    }

return 0;
}