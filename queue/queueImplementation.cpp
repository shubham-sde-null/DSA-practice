//stl
// #include<iostream>
// using namespace std;
// #include<queue>
// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     //printing the first element
//     cout<<q.front()<<endl;
//     //printing the size of the queue
//     cout<<q.size()<<endl;
//     //checking the git is empty or not
//     cout<<q.empty();
// return 0;
// }
//implementing the queue
#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;
    public:
    //suppose size is not provided then in that case I am using a very large size
    Queue(){
        size=100001;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    //push operation
    void enquque(int data){
        if(rear==size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    //pop operation
    int dequque(){
        if(rear==qfront){
            cout<<"queue is empty"<<endl;
        }
        else{
            //here I am returning the front which element is popped
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }

    }
    //giving the front
    int front(){
        if(qfront==rear){
            return -1;

        }
        else{
            return arr[qfront];
        }
    }
    //checking if queue is empty or not
    bool isEmpty(){
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
    Queue one;
    one.enquque(10);
    one.enquque(20);
    cout<<one.front()<<endl;
    one.dequque();
    cout<<one.front()<<endl;
    cout<<one.isEmpty();


return 0;
}