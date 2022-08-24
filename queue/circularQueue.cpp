#include<iostream>
using namespace std;
class CirularQueue{
    int *arr;
    int qfront;
    int rear;
    int size;
    public:
    CirularQueue(){
        size=100001;
        arr=new int[size];
        qfront=rear=-1;
    }
    //enqueue data into the queue. Returns true if it gets pushed into the stack
    bool enqueue(int data){
        if((qfront==0 && rear==size-1) || (rear==(qfront-1)%(size-1))){
            cout<<"queue is full"<<endl;
            return false;
        }
        //qfront as -1 means first element came to push
        else if(qfront==-1){
            qfront=rear=0;
            arr[rear]=data;
        }
        //if my rear reached at end I want my rear to point back to start of array, because we are dealing with circular queue
        else if(rear==size-1 && qfront!=0){
            rear=0;
            arr[rear]=data;
        }
        else{
            //if there is already value is present at particular position then I have to move my rear then only I can add my new value, if I had written arr[rear]=data ahead of rear++, then in this case I am overriding the previously stored value in array because next is placed over that element
            rear++;
            arr[rear]=data;
        }

return true;
}

};

int main(){
    CirularQueue cq;
    cout<<cq.enqueue(10);
return 0;
}