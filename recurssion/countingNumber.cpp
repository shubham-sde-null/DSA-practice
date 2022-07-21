#include<iostream>
using namespace std;
void printCount(int n){
    if(n==0){
        return;
        //it's mandatory to return something in base case, because unless we don't rerurn something our call stack keep on executing, if call stack dosen't finds return then it work on garbage values, so always make a base case in recurssion and then return something
    }
    cout<<n<<endl;
    printCount(n-1);
}
int main(){
    int n=5;
    printCount(n);

return 0;
}