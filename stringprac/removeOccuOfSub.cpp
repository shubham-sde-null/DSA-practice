#include<iostream>
using namespace std;
#include<string.h>
string subStringRemover(string str, string part){
    //this loop will only run when the below condition is satisfied else it will not enter into the while loop
    //when we use the find method at that time whatever we are finding must remain smaller then the length
    while((str.length()!=0) && (str.find(part)<str.length())){
        //erase function will take the start and the end positon to erase the string
        str.erase(str.find(part),part.length());
    }
    return str;
}
int main(){
    string str="daabcbaabcbc";
    string part="abc";
    cout<<subStringRemover(str,part);

return 0;
}