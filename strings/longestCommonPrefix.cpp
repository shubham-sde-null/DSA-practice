// #include<iostream>
// using namespace std;
// int main(){
//     string str1="flower";
//     string str2="flow";
//     string str3="flight";
//     int counter=0;
//     for(int i=0;i<str1.length();i++){
//         if((str1[i]==str2[i]) && (str2[i]==str3[i]) && (str1[i]==str3[i])){
//                             counter++;
//                     }
//     }
//     cout<<"the length of the common prefix is:"<<counter<<endl;
//     if(counter!=0){
//         for(int i=0;i<counter;i++){
//             cout<<str1[i];
//         }
//     }
//     else{
//         cout<<"there is no common prefix";
//     }
// return 0;
// }
// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector<string> strs;
//     strs.push_back("flower");
//     strs.push_back("flow");
//     strs.push_back("flight");
//     string str1=strs[0];
//     string str2=strs[1];
//     string str3=strs[2];
//     int counter=0;
//     // for(int i=0;i<strs.size();i++){
//     //     cout<<strs[i]<<endl;
//     // }
//     // for(int i=0;i<strs[0].length();i++){
//     //     if((strs[0].at(i)==strs[1].at(i)) && (strs[1].at(i)==strs[2].at(i)) && (strs[0].at(i)==strs[2].at(i))  ){
//     //         counter++;
//     //     }
//     // }
//      for(int i=0;i<str1.length();i++){
//         if((str1[i]==str2[i]) && (str2[i]==str3[i]) && (str1[i]==str3[i])){
//                             counter++;
//                     }
//     }
//     cout<<"the counter is:"<<counter;

// return 0;
// }
#include<iostream>
#include <bits/stdc++.h>
#include<string>
// #include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(string arr[],int n){
string result="";
if(n==0){
    return result;
}
if(n==1){
    return arr[0];
}
sort(arr,arr+n);
int minLength=min(arr[0].size(),arr[n-1].size());
string first=arr[0];
string last=arr[n-1];
// int i=0;
// while(i<minLength && first[i]==last[i]){
// result=result+first[i];
// i++;
// }
for(int i=0;i<minLength;i++){
    if(first[i]==last[i]){
        result=result+last[i];
        cout<<result;
    }
}
return result;
}
int main(){
    // string org[]={"geeksforgeekssss","geeks","geezer","geek"};
    string org[]={"geekle","geeksforgeeks","geeks","geek"};
    int length=sizeof(org)/sizeof(org[0]);
    cout<<"the lenght of the array string is:"<<length<<endl;
    sort(org,org+length);
    for(int i=0;i<length;i++){
        cout<<org[i]<<endl;
    }
    int minLenght=min( org[0].size(),org[length-1].size());

    cout<<"the min size is:"<<minLenght<<endl;
    cout<<"the longest comman prefix is:"<<longestCommonPrefix(org,length);

return 0;
}
// 4
// 6
// 6
// 7
// 7
// 7
// 5
// 4
// 4
// 5
// 4
// 4
// 4
// 4
