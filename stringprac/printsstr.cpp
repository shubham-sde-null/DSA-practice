#include<iostream>
using namespace std;
int main(){
    int count=0;
    char ch[20];
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    cout<<count;
return 0;
}