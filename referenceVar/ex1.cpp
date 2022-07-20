#include<iostream>
using namespace std;
int main(){int i=5;
cout<<i<<endl;
int& j=i;
cout<<j<<endl;
j++;
cout<<j<<endl;
cout<<i<<endl;
return 0;
}