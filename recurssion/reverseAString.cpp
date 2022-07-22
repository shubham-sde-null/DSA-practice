// #include<iostream>
// using namespace std;
// #include<string>
// void reverseString(string &str, int i, int j){
// if(i>j){
//     return;
// }
// swap(str[i],str[j]);
// i++;
// j--;
// reverseString(str,i,j);
// // cout<<str;
// }
// int main(){
//     string str="abcde";
//     int length=str.length()-1;
//     cout<<"the string before reverse is:"<<str<<endl;
//     reverseString(str,0,length);
//      cout<<"the string before reverse is:"<<str<<endl;

// return 0;
// }


//this is the single pointer approach where we are just using i and not j and reversing the string
#include<iostream>
using namespace std;
void reverseString(string &str, int i=0){
    //here we give the default argumnet such that if user does not specify from where to reverse the string then we will reverse the whole string
int n=str.length();
//here we will get the length of string from str
if(i==n/2){
    // here i is the middle point of string if we reach at the middle point then we have to stop it is the base case
    return;
}
swap(str[i],str[n-i-1]);
//this expression is nothing but swapping 1st element with the last element, if we scribble this expression on papaer we will get a better idea
i++;
reverseString(str,i);
}

int main(){
    string str="abcde";
    int length=str.length()-1;
    cout<<"the string before reverse is:"<<str<<endl;
    reverseString(str);
     cout<<"the string before reverse is:"<<str<<endl;

return 0;
}