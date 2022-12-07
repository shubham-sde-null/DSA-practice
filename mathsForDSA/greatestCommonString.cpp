//this method is going to work
#include<iostream>
using namespace std;
//I am using this function to see if the prefix of both the strings are same or not, if they are not then out gcd function is not going to run
// ex:"DEFABC"
// "ABC"
//in this case we will get "ABC" but we want " "
bool checkString(string str1, string str2){
    int min=str1.size()<str2.size()?str1.size():str2.size();
    for(int i=0;i<min;i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}
string gcdOfStrings(string str1, string str2) {
        if(str1==str2){
            return str1;
        }
        if(checkString(str1,str2)){
              if(str1.find(str2)==string::npos && str2.find(str1)==string::npos){
            return "";
        }
        if(str1.size()>str2.size()){
            str1=str1.substr(str2.size());
        }
         if(str2.size()>str1.size()){
            str2=str2.substr(str1.size());
        }
        return gcdOfStrings(str1,str2);
        }

       return "";
    }

int main(){
    string str1="ABCABC";
    string str2="ABC";
    cout<<"the gcd of string is:"<<gcdOfStrings(str1,str2);
return 0;
}

//this method only one test case is not passing
// class Solution {
// public:

//     string gcdOfStrings(string str1, string str2) {
//         if(str1==str2){
//             return str1;
//         }
//         // if(str1!=str2){
//         //     return "";
//         // }
//
//               if(str1.find(str2)==string::npos && str2.find(str1)==string::npos){
//             return "";
//         }
//         if(str1.size()>str2.size()){
//             str1=str1.substr(str2.size());
//         }
//          if(str2.size()>str1.size()){
//             str2=str2.substr(str1.size());
//         }
//         return gcdOfStrings(str1,str2);
//

//
//     }
// };