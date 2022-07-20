#include<iostream>
using namespace std;
int main(){
    int arr[10]={10};
    // cout<<"address of first element of aaray"<<arr<<endl;
    // cout<<"address of first element of aaray"<<arr+1;
    for(int i=0;i<10;i++){
        cout<<arr+i<<endl;
    }
    //printing all the elements addrerss in array
    cout<<"the address at arr[0] is: "<<&arr[0]<<endl;
    cout<<"the address at arr is: "<<arr<<endl;
    cout<<"the address at arr[1] is: "<<&arr[1]<<endl;
    cout<<"the address at arr+1 is: "<<arr+1;

return 0;
}