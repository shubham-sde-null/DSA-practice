#include<iostream>
using namespace std;
#include<string>
int main(){
    string s1="1010";
    string s2="1011";
    string result="";
    int s1length=s1.length();
    int s2length=s2.length();
    int carry=0;
    int i=0;
    while(i<s1length || i<s2length|| carry!=0){
        int x=0;
        if(i<s1length && s1.at(s1length-1-i)=='1'){
            x=1;
        }
        int y=0;
        if(i<s2length && s2.at(s2length-1-i)=='1'){
            y=1;
        }
        result=to_string((x+y+carry)%2)+result;
        carry=(x+y+carry)/2;
        i++;
    }
    cout<<"the result is:"<<result<<endl;
return 0;
}