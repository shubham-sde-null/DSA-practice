// #include<iostream>
// using namespace std;
// int main(){
// int row,col;
// cin>>row>>col;
// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         if(i==0 || i==(row-1)){
//             cout<<"*";
//         }
//         else if(j==0 || j==(col-1)){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }
// *****
// *   *
// *   *
// *****

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }
// *
// **
// ***
// ****
// *****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=(n-i)){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     // cout<<endl;
// return 0;
// }
//     *
//    **
//   ***
//  ****
// *****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(j<(n-(1+i))){
//  cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }

//         }
//         cout<<endl;
//     }
// return 0;
// }
//     *
//    **
//   ***
//  ****
// *****
// #include<iostream>
// using namespace std;
// int main(){
//     int counter=1;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<counter<<" ";

//         }
//         counter++;

//         cout<<endl;
//     }

// return 0;
// }
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// #include<iostream>
// using namespace std;
// int main(){
//     int counter=1;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<counter<<" ";
//              counter++;

//         }

//         cout<<endl;
//     }

// return 0;}
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         int space=2*n-2*(i+1);
//         for(int j=0;j<=space;j++){
//             cout<<" ";
//         }
//          for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//          cout<<endl;
//     }
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         int space=2*n-2*(i+1);
//         for(int j=0;j<=space;j++){
//             cout<<" ";
//         }
//          for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//          cout<<endl;
//     }

// return 0;
// }
// *       *
// **     **
// ***   ***
// **** ****
// **** ****
// ***   ***
// **     **
// *       *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// return 0;
// }
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
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<"1";
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }

// return 0;
// }
// 1
// 01
// 101
// 0101
// 10101

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<(n-i);j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// return 0;
// }
//           *****
//         *****
//       *****
//     *****
//   *****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" "<<j;
//         }
//         cout<<endl;
//     }
// return 0;
// }
//      1
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=n;j>=1;){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}