#include<iostream>
using namespace std;
string replaceSpaces(string &str){
string temp="";
for(int i=0;i<str.length();i++){
    if(str[i]==' '){
        temp.push_back('@');
        // temp.push_back('40');
        // I cant store a character like this, because charcters are of 1 unit, because i can eneter character between a-z, A-Z, 0-9, but i can't combine the two charcters together because they will become string
        temp.push_back('4');
        temp.push_back('0');
    }
    else{
        temp.push_back(str[i]);
    }
}
return temp;
}
int main(){
    string str;
    str="my name";
    //I am using like this because cin stops execution once it finds spaces tab or new line character, because of that cin doesn't store anything after first space and we don't get the correct result
    // cin>>str;
    //I can't use cin to store the string with spaces because, it will stop ecexution once it finds the space tab or new line character
    cout<<replaceSpaces(str);
return 0;
}