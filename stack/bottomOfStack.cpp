#include<iostream>
using namespace std;
#include<stack>
void insertAtBottom(stack<int> &st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int ans=st.top();
    st.pop();
    insertAtBottom(st,x);
    st.push(ans);
}
//just made the function to add at the bottom of stack
void elementsInStack(stack<int> st){

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
    insertAtBottom(st,100);
    elementsInStack(st);

return 0;
}