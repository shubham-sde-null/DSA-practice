#include<iostream>
using namespace std;
bool powerTwo(int n){
    if(n==0){
        return false;
    }
    if(n==1){
        return true;
    }
    else if(n%3==0 && n/3==1){
        return true;
    }
    else if(n%3!=0){
        return false;
    }
    else{
        bool ans=powerTwo(n/3);
        return ans;
    }
}
int main(){
    cout<<powerTwo(6);
return 0;
}