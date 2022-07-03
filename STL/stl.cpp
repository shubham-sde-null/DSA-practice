//Array
// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     array<int,4> a={1,2,3,5};
//     cout<<"accesing through the square brackets: "<<a[0]<<endl;
//     int size=a.size();
//     cout<<"the size of array is: "<<size<<endl;
//     cout<<"the front and the back elements are "<<a.front()<<" and "<<a.back()<<endl;
//     cout<<"the at property: "<<a.at(3);
// return 0;
// }

//Vector
// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     // cout<<"the size is:"<<v.capacity();
//     cout<<"the size is:"<<v.size()<<endl;
//     for(int i=0;i<5;i++){
//         v.push_back(i);
//     }
//     cout<<v.at(2);

// return 0;
// }

// queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string> q;
//     q.push("shubham");
//     q.push("pawar");
//     q.push("vasant");
//     cout<<q.front();
// return 0;
// }

//priority queue
//here we use top() to get the top element, whereas in queue we were using front()
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int> maxi;
//         maxi.push(7);
//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<endl;
//         maxi.pop();

//     }

// return 0;
// }

//set
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int> s;
//     s.insert(5);
//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(6);
//     s.insert(6);
//     s.insert(0);
//     s.insert(0);
//     s.insert(0);
//     set<int>::iterator itr=s.find(1);
//     cout<<"the value present at itr is "<<*itr;
//     for(auto it=itr;it!=s.end();it++){
//         cout<<*it<<endl;
//     }
// return 0;
// }
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    //here key is integer and the value is string
    m[1]="shubham";
    m[2]="vasant";
    m[8]="pawar";
    m[4]="india";
    m[12]="great";
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.erase(8);
     cout<<"after erase"<<endl;
      for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 4 :"<<m.count(4)<<endl;
    auto it=m.find(4);
    //Here I will get the refrence of key 4 and I am storing it in it
    cout<<"using iterable"<<endl;
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

return 0;
}