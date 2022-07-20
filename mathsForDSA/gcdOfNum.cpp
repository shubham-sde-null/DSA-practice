//the approach of this problem is we have a formaul gcd(a-b,b), we to repeat this formaula till either of a or b becomes 0, once one of the two becomes 0, then the other will be our answer
#include<iostream>
using namespace std;
int gcdOfNumbers(int a, int b){
if(a==0){
    // if one number is 0 then automatically other number is gcd
    return b;
}
if(b==0){
    return a;
}
while (a!=b)
//if both the numbers are different then we havr to do the following cases, and we will do this approach till we make the other one zero
{
    if(a>b){
        a=a-b;
    }
    if(b>a){
        b=b-a;
    }
}
// return a;
// is is not necessary to write over here because we have already done this above

}
int main(){
    int a=24;
    int b=72;
    cout<<gcdOfNumbers(a,b);
return 0;
}