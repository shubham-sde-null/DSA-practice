// #include<iostream>
// using namespace std;
// #include<string>
// #include<vector>
// int main(){
//     int num=345;
//     string temp=to_string(num);
//     int size=temp.length();
//     // string str1[size];
//     // string str2[size];
//     vector<char> str1(size);
//     vector<char> str2(size);
//     int res=-1;
// for(int i=0;i<temp.length();i++){
// char ch=temp[i];
// str1.push_back(ch);
// }
// cout<<endl;
// for(int i=temp.length()-1;i>=0;i--){
//   char ch=temp[i];
// str2.push_back(ch);
// }
// for(int i=0;i<str1.size();i++){
//     cout<<str1[i]<<" ";
// }
// cout<<endl;
// for(int i=0;i<str2.size();i++){
//     cout<<str2[i]<<" ";
// }
// cout<<endl;
// cout<<"ok"<<str1.size();
// // for(int i=0;i<temp.length();i++){
// //     if(str1[i]==str2[i]){
// //         res=1;
// //     }
// //     else{
// //         res=-1;
// //     }
// // }
// // if(res==1){
// //     cout<<"pallindrome";
// // }
// // else{
// //     cout<<"not pallindrome"<<endl;
// // }
// return 0;
// }
#include<iostream>
using namespace std;
#include<string>
#include<bits/stdc++.h>
string Pallindrome(string s1, string s2){
for(int i=0;i<s1.length();i++){
    if(s1==s2){
        return "Yes";
    }
    else{
        return "No";
    }
}
}
int main(){
    int num=343;
    string s1=to_string(num);
    string s2=s1;
    reverse(s2.begin(),s2.end());
    // cout<<s2<<endl;
    cout<<Pallindrome(s1,s2);

return 0;
}
