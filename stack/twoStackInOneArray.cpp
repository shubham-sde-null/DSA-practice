#include<iostream>
using namespace std;
#include<stack>
class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    TwoStack(int s){
        this->size=s;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    //push operation in stack1
    void push1(int num){
        //here must be a empty space between top1 and top2 the only I can add elements in my array
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"the stack is overflow"<<endl;
        }
    }
     //push operation in stack2
    void push2(int num){
        //here must be a empty space between top1 and top2 the only I can add elements in my array
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"the stack is overflow"<<endl;
        }
    }
    //pop operation, we have to pop the element as well as return the popped element
    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    int pop2(){
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};
int main(){
    TwoStack st(10);
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push2(100);
    st.push2(200);
    st.push2(300);
    cout<<st.pop2();

return 0;
}