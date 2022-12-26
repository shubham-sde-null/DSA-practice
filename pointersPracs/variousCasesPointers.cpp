#include<iostream>
using namespace std;
void update(int *p){
            *p=*p*2;
        }
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
        // cout<<"the address of p is:"<<p<<endl;
        // cout<<"the address of arr is:"<<arr<<endl;
        // cout<<arr[2];
        // cout<<*(p+2)<<endl;
        // cout<<p[2]<<endl;
    }
    // case:3 trying to change the address of arr, we can't change the address once we have initized it, we can change the value stored at a pointer
    {
        int arr[4]={1,2,3,4};
        int *ptr=arr;
        // cout<<"before value chaged:"<<ptr<<endl;
        // arr=arr+1;
        // this is not possible because arr is some address which can't be chaged
        ptr=ptr+1;
        // this is possible, becuase ptr is holding some value, it's holding address, but it is value for it so it can be chaged
        // cout<<"after value chaged:"<<ptr<<endl;
        //Note: if some varible was initalized with something it's address can't be chaged, we can chage the value present at that address but we can't change the address
    }
    // case:4 change value of single char
    {
        char ch='A';
        ch++;
        char* ptr=&ch;
        // cout<<"the value is:"<<ptr;
    //    we can't get the address of our char ch, we can only get the value using derefrencing
    // cout<<"the value is:"<<*ptr;
    }
    // case:5 how ptr works in char array, in char array if we try to print the address of out pointer we wil get the whole array in output(one more important thing we also need to give the extra one size for the null charcter in the char array othewise we will get the garbage value at the end)
    {
        char ch[4]={'A','B','C'};
        char *ptr=ch;
        // cout<<*ptr<<endl;
        //if we dereference the pointer then we will get the first value of array
    }
    //case:6 changing the size of the char pointer storing the char array, and also when we print the pointer we get the whole value from that point from where we stored the address
    {
        char ch[4]={'A','B','C'};
        char *ptr=ch; //or char *ptr=&ch[0]
        ptr=ptr+1; //when we do this I am changing the address stored in the pointer, earlier there was the first character now we changed it by 1 bit so now it will point to next address
        // cout<<ptr<<endl;

    }
    // case:7
    {
    char str[]="babbar";
    char *ptr=str;
    // cout<<ptr<<endl;
    // cout<<ptr[2]<<endl;
    //how I able to access the value with indexing, because if I write just ptr then I am getting the whole value so I can use the indexing to get the specific values
    // cout<<str[2];
    }
    //case:8 I can pass the address without using a pointer using the ampersent
    {
        int i=10;
        update(&i);
        cout<<i<<endl;
    }


return 0;
}