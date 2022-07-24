#include<iostream>
using namespace std;
#include<vector>
void solve(string str, string output, int index, vector<string> &ans){
    //base case
    if(index>=str.length()){
        if(output.length()>0){
            //we made this if condition because the answer don't want an empty string, if answer require empty string we will omit this if condition
ans.push_back(output);
        }

        return;
    }
    //exclude
    solve(str,output,index+1,ans);
    //incude
    char element=str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}
vector<string> subsequences(string &str){
    vector<string> ans;
    string output="";
    int index=0;
    solve(str,output,index,ans);
    return ans;
}
int main(){
    string str="abc";
    vector<string> result;
    result=subsequences(str);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    cout<<str;
    // cout<<result[0];
    // cout<<result;
return 0;
}