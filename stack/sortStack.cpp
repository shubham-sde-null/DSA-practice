#include<iostream>
using namespace std;
#include<stack>
//here one thing to note is that If I don't send refrence then I can't see my result because in first recurssive function my stack gets empty and that empty stack is sent in print stack so I will not see anything because my stack is empty[just for personal refrence]
void sortingAndInsert(stack<int> &st, int num){
    //here There are two conditons first is I have to check if my stack is empty, if oit's empty then don't compare anything just inserted the value but if stack is not empty and the top element is less then the number the pop it out and insert the number at it's place
    //why I have used st.empty() because in first recurssive function my stack gets empty so there is no top present over there, in this case my control won't enter in this if conditon so I have to use the empty conditon to get inside the if statement and after this there is top to compare
    if(st.empty() || (!st.empty() && st.top()<num)){
        st.push(num);
        return;
    }
    int ans=st.top();
    st.pop();
    sortingAndInsert(st,num);
    st.push(ans);
}
void sortStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int num=st.top();
    st.pop();
    sortStack(st);
    sortingAndInsert(st,num);

}
void printStack(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(-2);
    st.push(9);
    st.push(-7);
    st.push(3);
    cout<<"before sorting:"<<endl;
    printStack(st);
    sortStack(st);
    cout<<"after sorting:"<<endl;
    printStack(st);
return 0;
}