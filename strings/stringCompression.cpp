#include<iostream>
using namespace std;
#include<vector>
int compressedString(vector<string> &chars){
    int ansIndex=0;
int size=chars.size();
int i=0;
while(i<size){
    int j=i+1;
    while(j<size  && chars[i]==chars[j] ){
        j++;
    }
    chars[ansIndex++]=chars[i];
    int count=j-i;
    if(count>1){
string cnt=to_string(count);
for(char ch:cnt){
        chars[ansIndex++]=ch;
    }
    // for(char ch=0;ch<cnt.length();ch++){
    //     chars[ansIndex++]=cnt[ch];
    // }
    }
    i=j;
}
return ansIndex;
}
int main(){
    string str[7]={"a","a","b","b","c","c","c"};
    // string str[13]={"a","b","b","b","b","b","b","b","b","b","b","b","b"};
    vector<string> chars;
    int size=sizeof(str)/sizeof(str[0]);
    for(int i=0;i<size;i++){
       chars.push_back(str[i]);
    }
    // for(int i=0;i<chars.size();i++){
    //     cout<<chars[i]<<" ";
    // }

    int newVal=compressedString(chars);
      for(int i=0;i<newVal;i++){
        cout<<chars[i]<<" ";
    }

// return 0;
return 0;
}