#include<iostream>
using namespace std;
#include<vector>
bool isVowel(char ch){
   return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
int main(){
    int firstPos=-1;
    vector<char> str;
    str.push_back('h');
    str.push_back('e');
    str.push_back('l');
    str.push_back('l');
    str.push_back('o');
    str.push_back('w');
    str.push_back('o');
    str.push_back('r');
    str.push_back('l');
    str.push_back('d');
     for(int i=0;i<str.size();i++){
        if(isVowel(str[i])){
            firstPos=i;
            break;
        }
    }
    cout<<firstPos<<endl;
    for(int i=str.size()-1;i>=0;i--){
        if(isVowel(str[i])){
            swap(str[firstPos],str[i]);
            for(int j=firstPos;i<str.size();i++){
                if(isVowel(str[j])){
                    firstPos=j;
                    cout<<"updated first pos:"<<firstPos<<endl;
                    break;
                }
            }
        }
    }
    for(int i=0;i<str.size();i++){
        cout<<str[i]<< " ";
    }

return 0;
}