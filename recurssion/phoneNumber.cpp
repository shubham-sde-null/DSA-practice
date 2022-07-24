#include<iostream>
using namespace std;
#include<vector>
void solve(string digit,string output,int index,vector<string> &ans, string mapping[]){
//base case
if(index>=digit.length()){
    ans.push_back(output);
    return;
}
int number =digit[index]-'0';
//we want a integer over here because we have mapped the string related to numebers in out mapping array, so here we will get 2 which means it will be equal to "abc" in our mapping array
string value=mapping[number];
//here in value we are storing "abc"
for(int i=0;i<value.length();i++){
    output.push_back(value[i]);
    solve(digit,output,index+1,ans,mapping);
    //here recursivelliy operation will be done
    output.pop_back();
    //here we added pop back because once we do all the operation for "a", then we want to perform the operation for "b", but to do that first we have to make our output string empty, for thata reason we are using pop_back over here
}


}
vector<string> letterCombination(string &digits){
    vector<string> ans;
    if(digits.length()==0){
        return ans;
    }
    string output="";
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","xyzw"};
    solve(digits,output,index,ans,mapping);
    return ans;
}
int main(){
    string str="23";
    vector<string> answer;
    answer=letterCombination(str);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<endl;
    }

return 0;
}