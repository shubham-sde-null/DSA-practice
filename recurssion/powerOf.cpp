#include<iostream>
using namespace std;
int power(int a, int b){
if(b==0){
    //we know that anythinh raise to 0 is 1 ex:2^0=1
    return 1;
}
if(b==1){
    //we know that any number rais to 1 is same number ex:2^1=2
    return a;
}
//since we are using the approach as a^b=(a^b/2*a^b/2) when b is even and,
//  a^b=a*(a^b/2*a^b/2) when b is odd,
// from this we can observe that we have to find the (a^b), to get the answer if b is evev or b is odd
int ans=power(a,b/2);
if(b%2==0){
    return ans*ans;
}
if(b%2!=0){
    return a*ans*ans;
}
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<"the result for a raise to b is:"<<ans;
return 0;
}