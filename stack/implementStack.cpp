//stack implementation using array
#include<iostream>
using namespace std;
#include<stack>
class Stack{
    // basoic declarations
    public:
    int *arr;
    int size;
    int top=-1;
    //constructor
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    //properties
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }
    }
    void pop(){
        //if there is one element then I can apply pop operation
        if(top>=0){
            top--;
        }
        //if there is no element in stack
        else{
            cout<<"stack is underflow"<<endl;
        }
    }
    int peak(){
        if(top>=0){
            return arr[top];
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    //all values in arrray
    // void complete(){
    //     for(int i=0;i<size;i++){
    //         cout<<arr[i]<<endl;
    //     }
    // }

};
int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(20);
    st.push(39);
    st.push(17);
    cout<<"the top element is:"<<st.peak()<<endl;
    st.pop();cout<<"the top element is:"<<st.peak()<<endl;
return 0;
}