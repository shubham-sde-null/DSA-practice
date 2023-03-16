// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array:"<<endl;
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
// cin>>array[i];
//     }
//     int counter=1;
//     while(counter<n){
// for(int i=0;i<n-counter;i++){
//     if(array[i]>array[i+1]){
//         int temp=array[i];
//         array[i]=array[i+1];
//         array[i+1]=temp;
//     }
// }
// counter++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number of elements in array:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"the elements of array is:"<<endl;
//       for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     for(int i=1;i<n;i++){
//         //we can also write i=0;i<n-1;i++,it's also correct
//         //for round 1 to n-1, because we know that in selection sort  runs for n-1 times to get the correct result
//         for(int j=0;j<n-i;j++){
//             //what we are doing over here is we are comparing the element with the next one, to achieve that we have to run the j till the second last element then only when we reached at the second last elememt we can compare with the last element, and after every round is passed the value of j is decreasing so we used j=n-i
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     cout<<"the elements of array after sorting is:"<<endl;
// for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// return 0;
// }

// Optimizing the bubble sort
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"enter the number of elements in array:";
//      cin>>n;
//      int arr[n];
//      int counter=0;
//      //just counting the number of swaps took place
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//      cout<<"the elements of array is:"<<endl;
//        for(int i=0;i<n;i++){
//          cout<<arr[i]<<endl;
//      }
//      for(int i=1;i<n;i++){
//          bool swapped=false;
//          //here we are optimizing our bubble sorting to avoid running extra rounds if our array got sorted
//          //we can also write i=0;i<n-1;i++,it's also correct
//          //for round 1 to n-1, because we know that in selection sort  runs for n-1 times to get the correct result
//          for(int j=0;j<n-i;j++){
//              //what we are doing over here is we are comparing the element with the next one, to achieve that we have to run the j till the second last element then only when we reached at the second last elememt we can compare with the last element, and after every round is passed the value of j is decreasing so we used j=n-i
//              if(arr[j]>arr[j+1]){
//                  int temp=arr[j+1];
//                  arr[j+1]=arr[j];
//                  arr[j]=temp;
//                  swapped=true;
//                  //if swapping is done then update the value of swapped to true , otherwise swapped value will remain false
//                   counter++;
//                   //incremenating the counter for the number of swaps.
//              }
//          }
//          if(swapped==false){
//              //here if we got swapped value as false that's means no sorting is done, it means our array is sorted
//              break;
//          }
//      }
//      cout<<"the elements of array after sorting is:"<<endl;
//  for(int i=0;i<n;i++){
//          cout<<arr[i]<<endl;
//      }
//      cout<<"the total number of swaps are:"<<counter;
//  return 0;
//  }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[5] = {1, 2, 5, 4, 3};
//     int n = 5;
//     int counter = 0;
//     for (int i = 1; i < 5; i++)
//     {
//         bool swapped = false;
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (A[j] > A[j + 1])
//             {
//                 int temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//                 swapped = true;
//             }
//         }
//         if (swapped == true)
//         {
//             counter++;
//         }
//     }
//     cout << "the counter is:" << counter << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << A[i] << " ";
//     }
//     // return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    // int A[5] = {1, 2, 5, 4, 3};
    // int n = 5;
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int counter = 0;
    for (int i = 1; i < 5; i++)
    {
        bool swapped = false;
        for (int j = i - 1; j >= 0; j--)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == true)
        {
            counter++;
        }
    }
    cout << counter << endl;
}
