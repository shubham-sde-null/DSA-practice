#include<iostream>
using namespace std;
#include<stack>
#include<string.h>
int main(){
    string ans="";
    string str="azxxzy";
    stack <char> s;
    for(int i=0;i<str.size();i++){
      if( !s.empty() && s.top()==str[i]){
         s.pop();

      }
      else{
      s.push(str[i]);
      }
    }
    while(!s.empty()){
        char element=s.top();
        s.pop();
        ans=element+ans;
    }
    // for(int i=0;i<ans.length();i++){
    //     cout<<"the result is:"<<ans[i]<<" ";
    // }
    cout<<ans;
return 0;
}

// #include<iostream>
// using namespace std;
// #include<stack>
// int main(){
//     string s="abbaca";
//     stack<char>st;
//     int i=0;
//     // while(i<s.length()){
//     //     if(st.empty() || st.top()!=s[i]){
//     //         st.push(s[i]);
//     //     }
//     //     else{
//     //         st.pop();
//     //     }
//     //     i++;
//     // }
//     for(int i=0;i<s.size();i++){
//           if(st.empty() || st.top()!=s[i]){
//             st.push(s[i]);
//         }
//         else{
//             st.pop();
//         }
//     }
//     string ans="";
//     while(!st.empty()){
//         char element=st.top();
//         st.pop();
//         ans=element+ans;
//     }
//     for(int i=0;i<ans.length();i++){
// cout<<ans[i]<<" ";
//     }


// return 0;
// }