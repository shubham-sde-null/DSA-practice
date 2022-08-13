#include<iostream>
using namespace std;
#include<stack>
//this recurssive function is used to add the elements at the bottom of the stack
void insertAtBottom(stack<int> &st, int num){
    if(st.empty()){
        st.push(num);
        return;
    }
    int ans=st.top();
    st.pop();
    insertAtBottom(st,num);
    st.push(ans);
}
// here in this reverse function I am going to pass my stack and run the recurssive function till my stack does not gets empty and while we are emptying the stack I am going to store the top element in a variable and then pass this variable to another recurssive function which will add the element at the bottom of stack
void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int num=st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,num);
}
//this functioni is just used to see our stack reversed or not
void printStack(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"stack elements before reverse:"<<endl;
    printStack(st);
    reverseStack(st);
    cout<<"stack elements before reverse:"<<endl;
    printStack(st);
return 0;
}