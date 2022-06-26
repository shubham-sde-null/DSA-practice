#include<iostream>
using namespace std;

// Starting Template

// int main(){
//     int row,col;
//     cout<<"enter the rows and columns";
//     cin>>row>>col;
//     return 0;
// }

// Rectangle Pattern

// *****
// *****
// *****
// *****

// int main(){
//     int row,col;
//     cout<<"enter the number of rows and columns";
//     cin>>row>>col;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Hollow Rectangle

// *****
// *   *
// *   *
// *****

// int main(){
//     int row,col;
//     cout<<"enter the rows and columns";
//     cin>>row>>col;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i==0 || i==row-1){
//                 cout<<"*";
//             }
//             // yeh wala if hai uska kaam hai srating k row aur end k row mai sabhi start print karo
//             else if(j==0 || j==col-1){
//                 cout<<"*";
//             }
//             // upar ka if sirf first and last row mai hi chaleg lekin uske baad se hum bata rahe hai ki colum tu bas first colum aur last colum mai hi star print karega
//             else{
//                 cout<<" ";
//             }
//             // yeh wala condition first aur last colum k beech mai space add karne ka kaam karega
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Q: Print a inverted pyramid, here in this question we are given just a n according to that we have to print the pyramid

// *****
// ****
// ***
// **
// *

// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=n; i>=1;i--){
//         // this loop will run for the n number of times to parse complete length
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         // this loop will print the number of stars equal to the row number
//         cout<<endl;
//     }
//     return 0;

// }

// Inverted pyramid with 180 rotation
//     *
//    **
//   ***
//  ****
// *****

// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         // hume yeh loop sab row ko traverse karne k liye istemal karenge
//         for(int j=1;j<=n;j++){
//             // hamare re sab row mai kuch na kuch toh print ho hi raha hai chahe woh space ho ya colum isliye yeh row bhi pura chalega end tak
//          if(j<=(n-i)){
//             //  yaha par row -1 number time space print hinge isliye hum yeh condition use kar rahe hai
//              cout<<" ";
//          }
//          else{
//              cout<<"*";
//          }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// Half Pyramid using numbers

// 1
// 22
// 333
// 4444
// 55555

// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<a;
//         }
//         cout<<endl;
//         a++;
//     }
// }

// FLYOD'S TRIANGLE
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<a<<" ";
//             a++;
//         }
//         // humne is baar counter inner loop k andar hi daal diya hai
//         cout<<endl;
//     }
// }

// BUTTERFLY PATTERN

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//         cout<<"*";
//         }
//         int space=2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//          for(int j=1;j<=i;j++){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//         cout<<"*";
//         }
//         int space=2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//          for(int j=1;j<=i;j++){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Inverted Pattern

// 12345
// 1234
// 123
// 12
// 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         // yeh row pure rows k liye chalegi
//         for(int j=1;j<=(n+1)-i;j++){
//             // yaha par hum yeh loop column k liye print kar rahe hai aur hum yeh chchte hai ki yeh loop humara (n+1)-i time tak chale

//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1-0 PATTERN

// 1
// 01
// 101
// 0101
// 10101

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                     cout<<"1";
//             }
//             else{
//                 cout<<"0";
//             }

//         }
//         cout<<endl;
//     }
//     return 0;
// }

// RHOMBUS PATTERN

//     *****
//    *****
//   *****
//  *****
// *****

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// NUMBER PATTERN
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// PALLONDROME PATTERN

//     1
//    212
//   32123
//  4321234
// 543212345

// int main(){
//     int n;

//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int j;
//         for(j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         int k=i;
//         for(;j<=n;j++){
//             cout<<k--;
//         }
//         // yaha par maine j ko initialoze nhi kiya hai kyunki mai chahta hoo ki pehla loop  mai j jaha khtm hua hai uske baad se mera next j ka value start ho jaye
//         k=2;
//         for(;j<=n+i-1;j++){
//             cout<<k++;
//         }
//         // yha par bhi mai fir se wahi kaam karunga jaha se mera pura j khtam hua hai uske baad se mai nayi value add karna start kar dunga
//         cout<<endl;
//     }
//     return 0;
// }

// STAR PATTERN

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=(2*i-1);j++){
//                 cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=(n-i);j++){
       //here n=5 and i is also 5 so the looping condition becomes false as j=1 and j<=0 is not correct so the space will be not added in the first iteration
//             cout<<" ";
//         }
//         for(int j=1;j<=(2*i-1);j++){

//                 cout<<"*";
//         }
        //  cout<<endl;
//     }
//     return 0;
// }

// ZIG ZAG

//    *       *
//   *   *   *   *
// *       *       *
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=3;i++){
//         // yaha par row toh fix hai lekin colum fix nhi hai uske liye hum n ka use karenge ki kitna zig zag chahie
//         for(int j=1;j<=n;j++){
//             if(((i+j)%4==0) || (i==2 && j%4==0)){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;

//     }
//     return 0;
// }