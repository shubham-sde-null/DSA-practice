#include<iostream>
using namespace std;
#include<vector>
#include<string>
char val(char ch1='0', char ch2='0'){
if(ch1=='0' && ch2=='0'){
    return '0';
}
else if(ch1=='0' && ch2=='1'){
    return '1';
}
else if(ch1=='1' && ch2=='0'){
    return '1';
}
else{
    return '0';
}
}
int main(){
    string a="1011";
    string b="1011";
    string result="";
    int s1=a.length()-1;
    int s2=b.length()-1;
    int length=s1>s2?s1:s2;
    int loopLength=length+1;
    char ch[length];
    cout<<"the result is"<<ch[length]<<endl;
    while(s1>=0 && s2>=0){
        char carry='0';
        if(a[s1]=='1' && b[s2]=='1'){
            carry='1';
            ch[length]=val(a[s1],b[s2]);
            length--;
            ch[length]=carry;
            carry='0';
        }
        else{
            ch[length]=val(a[s1],b[s2]);
        }
        s1--;
        s2--;
        length--;
    }
    // while(s1>=0 && s2>=0){
    //     ch[length]=val(a[s1],b[s2]);
    //     s1--;
    //     s2--;
    //     length--;
    // }
    if(s1>=0){
        ch[length]=val(a[s1]);
    }
    if(s2>=0){
        ch[length]=val(b[s2]);
    }
    for(int i=0;i<loopLength;i++){
        cout<<ch[i]<<" ";
    }
    // cout<<"the result i got is:"<<result<<endl;

return 0;
}