#include<iostream>
using namespace std;
void reverse(string &str, int i, int j){
    if(i>j){
        return;
    }
    else{
        swap(str[i],str[j]);
        i++;
        j--;
        reverse(str,i,j);
    }
}
int main(){
    string str="abcde";
    reverse(str,0, 4);
    cout<<"str"<<endl;
return 0;
}