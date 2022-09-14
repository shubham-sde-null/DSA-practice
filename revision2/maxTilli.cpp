//using stl for array for accessing the the size property
#include<iostream>
#include<array>
#include<climits>
using namespace std;
int main()
{  //Given array
int mx=INT_MIN;
   array<int,6> arr{ 0, -9, 1, 3, -4, 5 };
   //Using the size() function from STL
//    cout<<"\nThe length of the given Array is: "<<arr.size();
//    return 0;
for(int i=0;i<arr.size();i++){
mx=max(mx,arr[i]);
cout<<"the maximum at the"<<i<<"th"<<"position is: "<<mx<<endl;
}
}