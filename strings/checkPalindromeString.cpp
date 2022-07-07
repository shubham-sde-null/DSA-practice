// #include<iostream>
// using namespace std;
// #include<vector>

// int main(){
//     vector<char> name;
//     int checker=0;
//     //we will increse the checker if the string is not pallindrome
//     name.push_back('a');
//     name.push_back('b');
//     name.push_back('g');
//     name.push_back('b');
//     name.push_back('a');
//     vector<char> name1(name);
//     //this vector will copy the original string, one important thing if I defined it above before adding characters in name, then characters will not get stores in name1, that's the reason I have defined this vector after inserting in name.
//     cout<<"the name string is:";

//     for(int i=0;i<name.size();i++){
//        cout<<name[i];
// }
// //this will print our original string
// cout<<endl;
// int s=0;
// int e=name.size()-1;
// while (s<e)
// {
//     swap(name1[s],name1[e]);
//     s++;
//     e--;
// }
// cout<<"the name1 string is:";
//     for(int i=0;i<name1.size();i++){
//        cout<<name1[i];
// }
// //this will print the reverse string
// cout<<endl;
// for(int i=0;i<name.size();i++){
//     if(name[i]==name1[i]){

//     }
//     else{
//         checker++;
//     }
// }
// //here we will check if the array is pallindrome or not based on comparing each elements
// if(checker!=0){
// cout<<"the string is not pallindrome";
// }
// else{
//     cout<<"the string is pallindrome";
// }
// return 0;
// }

// //this will give me correct answer, but we are using one extra space in the form of name1

//Now we are doing the same problem without single vector

// #include<iostream>
// #include<vector>
// using namespace std;
// bool pallindrome(vector<char> name){
//     int s=0;
//     int e=name.size()-1;
//     while (s<=e)
//     {
//         if(name[s]!=name[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// int main(){
// vector<char> name;
// name.push_back('A');
// name.push_back('b');
// name.push_back('c');
// name.push_back('b');
// name.push_back('a');
// int result=pallindrome(name);
// if(result==1){
//     cout<<"the string is pallindrome";
// }
// else{
//     cout<<"the string is not pallindrome";
// }
// return 0;
// }

//Now we want to make characters case insensitive, for that we are are going to make a function which will take characters and convert them to lowercase
#include<iostream>
#include<vector>
using namespace std;
char tolowerCase(char ch){
if(ch>='a' && ch<='b'){
    return ch;
}
else{
    char temp=ch - 'A' +'a';
    return temp;
}
}
bool pallindrome(vector<char> name){
    int s=0;
    int e=name.size()-1;
    while (s<=e)
    {
        if(tolowerCase(name[s])!=tolowerCase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
vector<char> name;
name.push_back('A');
name.push_back('b');
name.push_back('c');
name.push_back('b');
name.push_back('a');
int result=pallindrome(name);
if(result==1){
    cout<<"the string is pallindrome";
}
else{
    cout<<"the string is not pallindrome";
}
return 0;
}