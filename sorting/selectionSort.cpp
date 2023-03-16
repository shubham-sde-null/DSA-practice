// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the length of an array";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(array[j]<array[i]){
//                 int temp=array[j];
//                 array[j]=array[i];
//                 array[i]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<array[i];
//     }

//     return 0;
// }
// love babbar
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the elements of array after sorting is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // use for printing the array
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        // we are considering the first index as the min index, and as we keep on getting the lower value we will keep on updating the result, when the loops ineration is done the value of minIndex will update again to whatever value of i, we will do the same procedure
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
                // here we are checking is there any value which is smaller then the arr[minIndex], if yes then update the value of minIndex, once the outer loop terminates this value will be again update based on the conditions
            }
        }
        int temp = arr[minIndex];
        // store the minimum value in a temp variable, because we want to replace the value at the curent index with minimum and replace it with that position where the minimum is present
        arr[minIndex] = arr[i];
        // since we stored the minimu  value at some point, and we need to update the minimum value with the replaced one, which is present at the cureent position i.e i
        arr[i] = temp;
        // here we changed the position value of i with the minimum value
    }
    cout << "the elements of array after sorting is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}