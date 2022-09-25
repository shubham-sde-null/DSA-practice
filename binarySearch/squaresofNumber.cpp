
#include<iostream>
using namespace std;
#include<math.h>
bool result(int n){
    int s=0;
    int e=sqrt(n);
    while(s<=e){
        if(s*s+e*e==n){
            return true;
        }
        else if(s*s+e*e<n){
            s++;
        }
        else{
            e--;
        }
    }
    return false;
}
int main(){
    int n=29;
    cout<<result(n)<<endl;
return 0;
}