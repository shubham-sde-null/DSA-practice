#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 ||n==1){
        return 1;
    }

    // int smallP=factorial(n-1);
    // int bigP=n*smallP;
    // return bigP;
    // write this three lines or the below one line both will run fine, this function will keep on calling untill base condition is reached


      return n*factorial((n-1));
}
int main(){
    int n=6;
    int ans=0;
    ans=factorial(n);
    cout<<ans;
return 0;
}