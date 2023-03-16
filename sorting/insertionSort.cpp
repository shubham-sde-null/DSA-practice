// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"eneter the length of array";
//     cin>>n;
//     int array[n];
// for(int i=0;i<n;i++){
// cin>>array[i];
// }
// for(int i=1;i<n;i++){
//     int current=array[i];
//     int j=i-1;
//     while(array[j]>current && j>=0){
//         array[j+1]=array[j];
//         j--;
//     }
//     array[j+1]=current;

// }
// for(int i=0;i<n;i++){
//     cout<<array[i];
// }
// return 0;
// }

// code written using while loop is more cleaner then for loop, look above code

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "eneter the length of array";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i < n; i++)
    {
        // this outer for loop is indicating the number of rounds, and since we want to put the current value at it's correct position so I am callng it as current.
        // the another reason of using the current over here is that when we change the value then we will be required old values to plaace at the correct position
        int current = array[i];
        int j = i - 1;
        // we wrote this j ouside of loop because we want to use j to update position, but if we used j inside   it's loop then it does not have any scope and we will get the error.
        for (; j >= 0; j--)
        {
            if (array[j] > current)
            {
                // shift the value of array to left or right based on the values
                array[j + 1] = array[j];
                // don't get confuse with array[j+1] is same as the bottom, because what will happen is after every iteration value of j is decreasing, so when it reaches bottom then the value of j becomes -1(for array 10 1 7 ..) which means array[j+1]=current=array[-1+1]=current=array[0]=current, which means our 1 got placed at the correct position
            }
            else
            {
                break;
            }
        }
        array[j + 1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }
    return 0;
}