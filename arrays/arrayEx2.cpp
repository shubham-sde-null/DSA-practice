// Q:find the minimum and maximum element of an array
#include <iostream>
using namespace std;
#include <climits>
// here we are using the climits for INT_MIN and INT_MAX, they will give as a reference point to compare the smallestr and the biggets element
int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int array[n];
    int maxNo = INT_MIN;
    // here we are initalizing the maxNo with the min number so that we will get a reference that is ok if the number is bigger then the INT-MIN then I have to store it in my variable(this variable are just used for initial purpose if we used nothing then we will get the garbage values)
    int minNo = INT_MAX;
    // similarly here it will get the reference that what is the criteria for which the number is  considerd as small (this variable are just used for initial purpose if we used nothing then we will get the garbage values)
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, array[i]);
        // here we are findiing the max number with the help of the built function max where it will take the two number that is the inital value of maxNo and the array value and compare, same thing is going to happen in the min number
        //  if (array[i]>maxNo)
        //  {
        //      maxNo=array[i];
        //  }
        minNo = min(maxNo, array[i]);
        //     if (array[i]<minNo)
        //     {
        // minNo=array[i];
        //     }
    }
    cout << "the max number is:" << maxNo;
    cout << " the min number is:" << minNo;
}