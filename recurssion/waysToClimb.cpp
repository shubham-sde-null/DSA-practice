#include<iostream>
using namespace std;
int waysToClimbStairs(int n){
    if(n<0){
        return 0;
    }
    else if(n==0){
        return 1;
    }
    return waysToClimbStairs(n-1)+waysToClimbStairs(n-2);
}
int main(){
    int n=5;
    cout<<waysToClimbStairs(n);
return 0;
}