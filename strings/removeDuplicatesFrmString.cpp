// #include<iostream>
// using namespace std;
// #include<bits/stdc++.h>
// char giveTheMax(int unique[]){
//     int temp=-1;
//     int maxIndex=INT_MIN;
//         for(int i=0;i<26;i++){
// if(unique[i]>temp){
//     maxIndex=i;
//     temp=unique[i];
// }
//     }
//     // return maxIndex+'a';
//     if(unique[maxIndex]>1){
//         return maxIndex+'a';
//     }
//     else{
//         return ' ';
//     }
// }
// int main(){
//     int unique[26]={0};
//     string str="azxxzy";
//     // string str="azay";
//     cout<<str.length()<<endl;
//     int temp=-1;

//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         int index=ch-'a';
//         unique[index]++;
//     }
//     // for(int i=0;i<26;i++){
//     //     cout<<unique[i]<<" ";
//     // }
// cout<<"the max occuring character is:"<<giveTheMax(unique);
//     // cout<<"the value of temp is:"<<maxIndex<<endl;

// return 0;
// }
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int occOfMaxRepeater(string str,char ch){
 int counter=0;
 int startOfLoop=str.find(ch);
//  int endOfLoop=str.find(!ch);
 for(int i=startOfLoop;i<str.length();i++){
    if(str[i]==ch ){
        counter++;
    if(str[i+1]!=ch){
        break;
    }
    }

 }
return counter;
}

char maxRepeater(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            cout<<str[i]<<endl;
            return str[i];
        }
    }
    return ' ';
}
int main(){
    int count1[26]={0};
    string str="aababaab";
    // string str="azxxzyy";
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int index=ch-'a';
        count1[index]++;
    }

int i=0;
while( i<str.length() && maxRepeater(str)!=' '){
    char temp=maxRepeater(str);
    int count=occOfMaxRepeater(str,temp);
    str.erase(str.find(temp),count);
    i++;
}
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
return 0;
}