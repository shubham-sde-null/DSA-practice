#include<iostream>
using namespace std;
#include<vector>
bool valid(char ch)
{
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='1' && ch<='9')){
    return 1;
}
else {
    return 0;
}
//this boolean function will check the character whether it is valid or not i.e it will check if the number is arimethic or not if the number is arithmtic it will return 1 else 0
}
char tolowerCase(char ch){
    if((ch>='a' && ch<='z') || (ch>='a' && ch<='z')){
        return ch;
    }
    else{
        char temp=ch - 'A' + 'a';
        return temp;
    }
}
//this function will convert any charcter which is in upper case to lower case and lower case charcters will remain as it is

bool pallindrome(vector<char> ch){
    int s=0;
    int e=ch.size()-1;
    while (s<=e)
    {
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

}
//this function will check if the string is palindrome or not

bool removingNonArm(vector<char> ch){
    vector<char> temp;
    //here we are making a temp vector to store all the valid charcters, because there might be invalid charcters prrsent in our original vector or string
    for(int i=0;i<ch.size();i++){
        if(valid(ch[i])){
            temp.push_back(ch[i]);
        }
    }
    for(int i=0;i<ch.size();i++){
        temp[i]=tolowerCase(temp[i]);
    }
    // here we will convert the uppercase to lowercase if any present in temp vector
    return pallindrome(temp);
    //here it is important line because we have to call the pallindrome function in return such that when we call remoingNonArm from the main function
}

int main(){
vector<char> ch;
ch.push_back('a');
ch.push_back('b');
ch.push_back('#');
ch.push_back('$');
ch.push_back('c');
ch.push_back('b');
ch.push_back('a');

int result=removingNonArm(ch);
if(result==1){
    cout<<"valid palindrome";
}
else{
    cout<<"Invalid palindrome";
}
return 0;
}