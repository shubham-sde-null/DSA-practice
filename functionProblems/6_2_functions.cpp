// Q: print all prime numbers between 2 given numbers
// #include<iostream>
// #include<cmath>
// using namespace std;
// bool isPrime(int n){
// for(int i=2;i<=sqrt(n);i++){
//     // we are running it from 2 because as we know that all number is divisble by 2
//     if(n%i==0){
//         return false;
//     }
//     return true;
// }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a;i<=b;i++){
//         if(isPrime(i)){
//             // if isprime functions returns true then only this function will run else it will not going to work;
//             cout<<i;
//             cout<<endl;
//         }
//     }
//     return 0;
// }

// Q: Print fabonnaci series of the given number

// 0,1,1,2,3,5,8....

// #include<iostream>
// using namespace std;
// void fibonacci(int n){
//     int t1=0;
//     int t2=1;
//     int nextTerm;
//     for(int i=1;i<=n;i++){
//         cout<<t1<<endl;
//         // hum yaha par terms print karwa rahe hai aur jaise jaise loop age badega waise waise mera fibonacci series ka sequence milta chala jayega
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     fibonacci(n);
//     return 0;
// }

// Q: Find Factoria of a given number?
// 1!=1
// 2!=2*1=2
// 3!=3*2*1=6

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int factorial=1;
//     // here I might think that why I have not created condition when i==1, because our for loop starting from 2 and when it checks 2<=1 conditionnis false it does not enter in the loop and bydefault returns 1 which we have assigned to factorial at starting
//     for(int i=2;i<=n;i++){
//             factorial*=i;
//         }
//         return factorial;
// }
// int main(){
//     int n;
//     cin>>n;
//     int res=factorial(n);
//     cout<<"the factorial of entered number is:"<<res;
//     return 0;
// }

// Q:Find nCr formula fo nCr is n!/r!*(n-r)!


// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int factorial=1;
//      for(int i=2;i<=n;i++){
//             factorial*=i;
//         }
//         return factorial;
// }
// int main(){
//     int n,r;
//     int diff;
// cout<<"please enter the value of n and r";
// cin>>n>>r;
// diff=n-r;
// int res=factorial(n)/(factorial(r)*factorial(diff));
// // put the bottom part i.e the divisor part at the bottom else we will get garbage values in output
// cout<<"the nCr of the given values are:"<<res;
// }

// Q: Pascals Traingle

// 1 0C0
// 1 1C0 1 1C1
// 1 2C0 2 2C1 1 2C2
// 1 3C0 3 3C1 3 3C2 1 3C3
// 1 4C0 4 4C1 6 4C2  4 4C3 1 4C4

// if we see the bionmial coefficienet then we will get they are generating from the formula nCr=n1/r!*(n-r)!
// so we can write each term t in the form of iCj where i and j are rows and column numbers ti,j=iCj

#include<iostream>
using namespace std;
 int factorial(int n){
    int factorial=1;
     for(int i=2;i<=n;i++){
            factorial*=i;
        }
        return factorial;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++){
        cout<<factorial(i)/(factorial(j)*factorial(i-j));
    }
    cout<<endl;
}    return 0;
}


