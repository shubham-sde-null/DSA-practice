#include<iostream>
using namespace std;
#include<stack>
void solve(stack<int> &inputStack,int count, int size){
    if(count==size/2){
        inputStack.pop();
        return;
    }
    //here I am going to store those elements which I don't want to delete
    int num=inputStack.top();
    //once I stored the elements then I will pop it out from stack
    inputStack.pop();
    //again I will call the recurssion with the value of count incremented
    solve(inputStack,count+1,size);
    //this push operation won't work untill the base condition of recurssion is reached and something is returned frombthere
    inputStack.push(num);
}
void deleteMid(stack<int> &inputStack, int size){
    int count=0;
    solve(inputStack,count,size);
    //why I done size-1, becuase when my solve function will run it will remove the middle element so there will be one element less then what the elements were there earlier in the stack
    int temp=size-1;
    //here I just want to see the result whether my middle is deleted or not
    for(int i=temp;i>0;i--){
        cout<<inputStack.top()<<endl;
        inputStack.pop();
        temp--;
    }
}
int main(){
    stack<int> inputStack;
    int sizeOfStack;
    inputStack.push(10);
    inputStack.push(20);
    inputStack.push(30);
    inputStack.push(40);
    inputStack.push(50);
    inputStack.push(60);
    inputStack.push(70);
    sizeOfStack=inputStack.size();
    deleteMid(inputStack,sizeOfStack);

return 0;
}