#include<iostream>
using namespace std;
void doublePointers(int **p){
    p=p+1;
    // cout<<&p<<endl;
    // cout<<"hello";
}
int main(){
    // int num=10;
    // int *ptr=&num;
    // int **ptr1=&ptr;
    // cout<<"the address of num is:"<<&num<<endl;
    // cout<<"the address of num is:"<<ptr<<endl;
    // cout<<"the address of num is:"<<*ptr1<<endl;
    //this all will give the same address
    // cout<<num<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr1<<endl;
    // this all will give the same value
    //Double pointers in a function
    int num=10;
    int *ptr=&num;
    int **ptr1=&ptr;
    cout<<"the address of the ptr is:"<<&ptr<<endl;
    cout<<"the value at the ptr is:"<<ptr<<endl;
    cout<<"the value at the ptr is:"<<*ptr<<endl;

    cout<<"the address of the double pointer is:"<<&ptr1<<endl;
    doublePointers(ptr1);
     cout<<"the address of the double pointer is:"<<&ptr1<<endl;

return 0;
}