#include<iostream>
using namespace std;
void print(int *p){
cout<<*p<<endl;
}
// void update1(int *p){
//     // p=p+1;
//     *p=*p+1;
//     cout<<"the updated address of p is:"<<p<<endl;
//     cout<<*p<<endl;
// }
// void update2(int *p){
//     p=p+1;
//     cout<<*p<<endl;
// }
void specificArray(int arr[], int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    //basic pointers theory

    // int a=10;
    // int * ptr=&a;
    // int * q=ptr;
    // cout<<"the addesss of ptr is:"<<ptr<<endl;
    // cout<<"the addesss of new ptr is:"<<q<<endl;
    // cout<<"the addesss of a is:"<<&a<<endl;
    // cout<<a<<endl;
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(ptr);
    // int *ptr=&a;
    // cout<<"the addess of the ptr is:"<<ptr<<endl;
    // ptr=ptr+1;
    //   cout<<"the addess of the ptr is:"<<ptr;

    //pointer with array

    // int arr[5]={1,2,3,4,5};
    // int *temp=&arr[5];
    // cout<<*temp<<endl;
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+1);
    // what happens in background if we search for arr[2] for example
    //*(arr+2)
    //*(710+8) because here 1 means 4 bytes int so 2 means 8 bytes
    //*(718)
    //2
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(temp)<<endl;
    // int arr[10];
    // arr=arr+1;//ERROE, why? below explanation
    // we are trying to change the mapping of symbol table, symbol table is used to store the mapping of each varible name to it's corresponding values
    // int * ptr=arr;
    // ptr=ptr+1;NO ERRO, why? look below explanation
     //we can to this, it may look like I am doing like above but here we are not changing the mapping instead we are trying to change the addess stores at the pointer, now since we have chaged the ptr address now it will the address of some another index or varible of array

    //character array
    // char ch[5]="abcde";
    //ERROR
    //here I am getting error even though there are just 5 characters, but what is the reason, the reason is that in character array there is 1 null character and we have to give the size for that also
    // char ch[6]="abcde";
    // NO ERROR
    // cout<<ch<<endl;
    // char ak[4]={'a','k','m'};
    // cout<<ak;
    // IMPLEMENTATION of "cout" function for int and char array

    //here what is happening in case of int array when we put the name of the array then we used to get the address of the first location, but in case of the char array we will get the whole output

    // Pointer on single character
    // char temp='Z';
    // char *p=&temp;
    //when we make pointer for a single char, then we can't get the location it will show undedined, it is beacause in single char there is no null character, and compiler thinks there is someissue and doesn't give the result
    // cout<<p;
    //we will get some random value

    // Pointers and functions
    // simple example 1
    // int num=10;
    // int *p=&num;
    // print(p);

    //changing address of single int

    // int num=10;
    // int *p=&num;
    // cout<<"the old addess of p is:"<<p<<endl;
    // update1(p);

    //changing the address of array
    // int arr[4]={1,2,3,4};
    // int *p=&arr[0];
    // update2(p);

    //What happens if we pass array in function?
    // when we pass an array as an argument in funtion then in that function that pointer is receives as a pointer, and all operation is done as the pointer
    // void getArray(int arr[],int n){

    // }
    //here we can see there is not any difference, but internally it is written as
    // void getArray(*arr, int n)
    // here we can see internally it is looking as a pointer
    //if we print the sizeOf(arr) we will get 8 bytes because now it is a pointer
    //but if we print the sizeOf array in the main function then it will give me the acutal size not the total size
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    specificArray(ptr+2,3);
return 0;
}
