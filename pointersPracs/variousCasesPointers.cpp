#include<iostream>
using namespace std;
int main(){
     // case:1 when we don't have used the ampersent for a null pointer while initalization, it is applicable to single variable also, in case of array we don't use ampersent because the name of array already means the address of the first element and using it we can traverse the whole array but that doesn't happens with the null or single varible;
    {
    int *p=0;
    int first=10;
    // *p=first; //this will give error becuase we are trying to initalize p without &
    // cout<<*p;
    //this will not run our code
    p=&first;
    //this will work fine, so we need to use the ampersent even if we declared the null pointer
    // cout<<*p;
    }
    //case:2 if I have used array and made a pointer , then I can use the pointer to access the value of array like an array
    /* ex:arr[5]={1,2,3,4,5};
    int *p=arr;// in case of array we don't need to use the ampersent
    cout<<arr[2];
    how this works internally
    *(arr+2)=*(someAddress+8Bytes)=3;
    same happens with pointer p
    p[2] means *(p+2) here p having the address of the arr so it means the same thing
    */

    {
        int arr[5]={1,2,3,4,5};
        int *p=arr;
        cout<<"the address of p is:"<<p<<endl;
        cout<<"the address of arr is:"<<arr<<endl;
        cout<<arr[2];
        cout<<*(p+2)<<endl;
        // cout<<p[2]<<endl;
    }


return 0;
}