// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     char ch[6]="abcde";
//     char ck[6]={'a','b','c','d','e'};
//     cout<<arr<<endl;
//     cout<<ch<<endl;
//     cout<<ck<<endl;
// return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int num[5]={1,2,3,4,5};
    int *ptr=&num[0];
    cout<<num<<endl;
    cout<<ptr<<endl;
    cout<<&num[0]<<endl;

return 0;
}