#include<iostream>
using namespace std;
#include<stack>
bool checkRedundant(string str){
    stack<int> st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        //here I am pushing only those things which are either opening bracket or any operator
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else{
            //here once I got the closing bracket, then I will run a loop untill a got a closing bracekt and check is there any operator present inbetween those brackets
            if(ch==')'){
                bool isRedundant=true;
                while(st.top()!='('){
                    char top=st.top();
                    if(top=='(' || top=='+' || top=='-' || top=='*' || top=='/'){
                        isRedundant=false;
                    }
                    st.pop();
                }
                if(isRedundant==true){
                    return true;
                }
                //here I am removing the opening bracket, because above while loop will run till it doesn't find any opening bracket, so I have to remove that opening braceket because I have to also traverse further the closing bracket is there any brackets still present to traverse
                st.pop();
            }
        }
    }
    //if there is true condition then I might have returned in above conditons but if it's not true then it's false
    return false;
}
int main(){
// string str="((a+b))";//must give 1 as output
string str="(a+b)";//must give 0 as output
if(checkRedundant(str)){
    cout<<"redundant brackets are present"<<endl;
}
else{
    cout<<"redundant brackets are not present"<<endl;
}
return 0;
}