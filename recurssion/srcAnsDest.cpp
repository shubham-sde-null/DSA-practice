#include<iostream>
using namespace std;
void srcDest(int src, int dest){
    cout<<"source is "<<src<<" and is "<<dest<<endl;
    if(src==dest){
        cout<<"Ghar pahoncg gaya";
        return;
        //returning is mandatory in base case to run the recurssive function
    }
    src++;
    srcDest(src,dest);
}
int main(){
    int src=1;
    int dest=10;
    srcDest(src,dest);
return 0;
}