#include<iostream>
using namespace std;
int powerOf_2(int n){
    //base case
    if(n==0){
        return 1;
    }

// int smallerProblem=powerOf_2(n-1);
// int biggerProblem=2*smallerProblem;
// return biggerProblem;

    //Recursive relation
    return 2*powerOf_2((n-1));

}
int main(){
    int n;
    cin>>n;
    cout<<powerOf_2(n)<<endl;
    cout<<"hello";

return 0;
}