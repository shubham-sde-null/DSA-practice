#include <iostream>
using namespace std;
#include <queue>
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    cout << "the fornt element of the queue is:" << q.front() << endl;
    cout << "the size of the queue is:" << q.size() << endl;
    if (q.empty())
    {
        cout << "the queue is empty" << endl;
    }
    else
    {
        cout << "the queue is not empty";
    }
    return 0;
}