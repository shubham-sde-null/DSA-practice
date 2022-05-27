// Q1: Sum of first n natural numbers?
// 1+2+3+4....n
// formula for finding n natural numbers n(n+1)/2

// #include<iostream>
// using namespace std;
// int sum_natural(int n){
//     int sum=0;
//         for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
// int res=sum_natural(n);
// cout<<"the sum of n natural number is :"<<res;

//     // USING FORMULA Just place this part in function
//     cout<<(n*(n+1))/2;

//     return 0;
// }

// Q2: Check if the triplet is pythagorian triplet

// Logic:store the maximum value in one variable and the other two in two seperate variables and then apply paythagoroes on them

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool check(int x,int y,int z){

//     int a=max(x,max(y,z));
//     int b,c;
//     // humko yeh max function do number ka maximum value deta hai
//     if(a==x){
//         b=y;
//         c=z;
//     }

//     else if (a==y)
//     {
//         b=x;
//         c=z;
//     }
//     else{
//         b=x;
//         c=y;
//     }
//      // abhi humko check karna hai ki a mai maximum value kya store hui hogi toh uske liye hum if else condition laga kar check kar lete hai
//      if(a*a==b*b+c*c){
//          return true;
//      }
//     //  yaha par humko pata chala gaya hai ki a k andar maximum value store ho gayi hai aur mai formula lagakar bool value return kar sakta hoo
//      else{
//          return false;
//      }
// }
// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     if(check(x,y,z)){
//         cout<<"pythagorian triplet";
//     }
//     else{
//         cout<<"not a pythagorian triplet";
//     }
//     return 0;
// }

// Q3) a==>Conversion problems from binary to decimal?

// #include<iostream>
// using namespace std;
// int binaryToDecimal(int n){
//     int ans=0;
//     // iske andar hum sab result store karenge
//     int x=1;
//     // yeh value humare power rahte hai 2^0,2^1,2^2....
//     while(n>0){
//         int y=n%10;
//         // yaha par y mai mujhko remainder milega jisko mai x k sath multiply karunga
//         ans+=x*y;
//         x*=2;
//         // jo ki yeh binary hai isme power 2 k raise mai rehte hai and starts from 1,2,4,8,16...
//         n=n/10;
            // I am updating n because want to work on remaining digits
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<binaryToDecimal(n)<<endl;
//     return 0;
// }

// Q3: b==> Convert octal to decimal


// #include<iostream>
// using namespace std;
// int octalToDecimal(int n){
//     // yaha par bhi humara process same hi rahega bus hum yaha par base ko 2 k badle 8 kar denge
//     int ans=0;
//     // iske andar hum sab result store karenge
//     int x=1;
//     // yeh value humare power rahte hai 8^0,8^1,8^2....
//     while(n>0){
//         int y=n%10;
//         // yaha par y mai mujhko remainder milega jisko mai x k sath multiply karunga
//         ans+=x*y;
//         x*=8;
//         // jo ki yeh binary hai isme power 2 k raise mai rehte hai and starts from 1,2,4,8,16...
//         n=n/10;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<octalToDecimal(n);
//     return 0;
// }

//Q3:  c==> hexadecimal to decimal

// #include<iostream>
// #include<bits/stdc++.h>
// // this header file includes every thing which is required by our program
// using namespace std;
// int hexadecimalToDecimal(string n){
//     int ans=0;
//     int x=1;
//     int s=n.size();
//     // yeh size function string ka function hai jo hume string ki size batata hai

//     // hume string mai single quote use karna hota hai agar hum double quote use karenge toh output nhi ayega
//     for(int i=s-1;i>=0;i--){
//         if(n[i]>='0' && n[i]<='9'){
//             // dekho hexadecimal mai total 16 digits hote hai jisme 0,9 numbers hite hai aur baki A,F tak hote hai toh half k liye mai use kar raha hoo ek condition aur dusre k liye mai use karunga dusri condition
//             // Bacically yaha par ASCII Value k term mai subraction hokar hume output int mai milta hai ex: ASCII OF '0'=48 ,'1'=49....,'9'=57
//             // so if '1'-'0'=49-48=1(here this 1 is int not any ascii so we can do the normal arithmetic operation )
//             ans+=x*(n[i]-'0');
//             // jaise hum pehle last digit kaise nikalte the n%10 karke hum ko yaha par last value directly mil rahi hai using string aur hum yaha par '0' isliye use kar rahe hai taki mujhe ek positive value mil sake jis se mai x ko multiply kar saku

//         }
//         else if(n[i]>='A' && n[i]<='F'){
//             ans+=x*(n[i]-'A'+10);
//             // yaha par maine 10 isliye add kiya hai kyunki humko yaha par 10,11,12... kind of value chahahiye kyunki dekho 'A'-'A' 0 hojayga toh humko usme 10 add karna padega tabhi toh malum padega ki kya value hai
//         }
//         x*=16;
//     }
//     return ans;
// }
// int main(){
//     string n;
//     cin>>n;
//     cout<<hexadecimalToDecimal(n);
//     return 0;
// }

//Q3:  d==> decimal to binary
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int decimalToBinary(int n){
//     int x=1;
//     int ans=0;
//     while(x<=n)
//         x*=2;
//         x/=2;
// while(x>0){
//         int lastDigit=n/x;
//         n-=lastDigit*x;
//         x/=2;
//         ans=ans*10+lastDigit;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"enter the decimal number:";
//     cin>>n;
//     cout<<decimalToBinary(n);
//     return 0;
// }

// Q3:  d==> decimal to binary(geeks for geek )

// #include<iostream>
// using namespace std;
// void decimalToBinary(int n){
//     int ans[20];
//     int i=0;
//     while(n>0){
//         ans[i]=n%2;
//         n=n/2;
//         i++;
//     }
//     // here values get stored in array start to end, but we will get the actual resylt if we reverse the array because which got inserted first should be come at last
//    for (int j=i-1; j>=0;j--){
//     cout << ans[j];
//    }
// //    with this for loop we are printing the last value first and like wise we will run till the first element

// }
// int main(){
//     int n;
//     cout<<"enter the binary number:";
//     cin>>n;
//     decimalToBinary(n);
//     return 0;
// }

// Q3:  d==> decimal to hexadecimal(geeks for geek )

#include<iostream>
using namespace std;
void decimalToHexadecimal(int n){
    char hexadeci[20];
    int i=0;
    while(n!=0){
        int temp;
        temp=n%16;
        if(temp<10){
            hexadeci[i]=temp+48;
            // reason why we use 48?
            // here if temp=1 then 1+48=49='1'
            // here if temp=2 then 2+48=50='2'
            // here if temp=3 then 3+48=51='3'
            i++;
        }
        else{
            hexadeci[i]=temp+55;
            // reason why we use 55?
            // here if temp=10 then 10+55=65='A'
            // here if temp=11 then 11+55=66='B'
            // here if temp=12 then 12+55=67='C'
            i++;
        }
        n=n/16;

    }
    for(int j=i-1;j>=0;j--){
        cout<<hexadeci[j];
    }
}
int main(){
    int n;
    cout<<"enter the decimal number";
    cin>>n;
    decimalToHexadecimal(n);
    return 0;
}






