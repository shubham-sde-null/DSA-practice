#include<iostream>
using namespace std;
string removeOccSubstring( string s, string part){
while (s.length()!=0 && s.find(part)<s.length())
//here s.find() will check if the element is present or not in the string, along with that we want that part's index must be smaller then the length of string
{
    s.erase(s.find(part),part.length());
    //here erase will take the position from where we want to erase somrthing and till what part we have to erase
}
return s;

}
int main(){
    string s="daabcdaabcbc";
    string part="abc";
    cout<<removeOccSubstring(s,part);
return 0;
}