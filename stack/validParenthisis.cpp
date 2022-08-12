#include<iostream>
using namespace std;
#include<stack>
bool matches(char top, char ch){
    if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
        return true;
    }
    else{
        return false;
    }
}
bool validParenthisis(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        //inserting the opening brackets in stack
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }

        else{

            if(!s.empty()){
                char top=s.top();
                if(matches(top,ch)){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    // string str="[({})]";
    // stack<char> s;
    // for(int i=0;i<str.length();i++){
    //     char ch=str[i];
    //     //inserting the opening brackets in stack
    //     if(ch=='[' || ch=='(' || ch=='{'){
    //         s.push(ch);
    //     }
    //     else{
    //         char top=s.top();
    //         if(!s.empty()){
    //             if(matches(top,ch)){
    //                 s.pop();
    //             }
    //             else{
    //                 return false;
    //             }
    //         }
    //         else{
    //             return false;
    //         }
    //     }
    // }
    // if(s.empty()){
    //     return true;
    // }
    // else{
    //     return false;
    // }
    string str="[({})]";
    cout<<validParenthisis(str);
return 0;
}