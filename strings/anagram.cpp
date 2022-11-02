#include<iostream>
using namespace std;
int main(){
    int result=1;
    string s1="anagram";
    string s2="nagaram";
    int a1[26]={0};
    int a2[26]={0};
    for(int i=0;i<s1.length();i++){
        char ch=s1[i];
        int number=0;
        number=ch-'a';
        a1[number]++;
    }
    for(int i=0;i<s2.length();i++){
        char ch=s2[i];
        int number=0;
        number=ch-'a';
        a2[number]++;
    }
    for(int i=0;i<26;i++){
        if(a1[i]!=a2[i]){
            result=0;
        }
    }
    cout<<result;
    // cout<<a1[0];
return 0;
}