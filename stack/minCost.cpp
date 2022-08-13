#include<iostream>
using namespace std;
#include<stack>
int minCount(string str){
    if(str.length()%2!=0){
        return -1;
    }
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        //ch is open brace
        if(ch=='{'){
            s.push(ch);
        }
        else{
            //here comes 2 cases accordingly which are based on what is present at top, of top is opening bracket and here ch is closing bracket in this case our expression becomes valid so I have to pop otherwise if top is not equal to opening bracket then I will push
            //when ch is closed brace, during this case it will form a valid expression like { } so I have to pop it out from stack
            if(!s.empty() && s.top()=='{'){
                s.pop();
            }
            else{
                s.push(ch);
            }

        }

    }
    //stack contains invalid expression
        int a=0;
        int b=0;
        while(!s.empty()){
            if(s.top()=='{'){
                    b++;
            }
            else{
                a++;
            }
            s.pop();
        }
        int ans=((a+1)/2)+((b+1)/2);
    return ans;
}
int main(){
    string str="}}}{{{";
    cout<<minCount(str);
return 0;
}