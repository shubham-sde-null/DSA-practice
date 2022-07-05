// using my logic

// #include<iostream>
// using namespace std;
// void moveZeros(int arr[], int n, int newarray[]){
//         int j=0;
//
//       for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             newarray[j]=arr[i];
//             j++;
//         }
//       }

// }
// void print(int newarray[], int n){
//     cout<<"the otput after moving zeros are:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<newarray[i]<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the number of elements in array:"<<endl;
//     cin>>n;
//     int newarray[n]={0};
//     int arr[n];
//     for(int i=0;i<n;i++){
//             cin>>arr[i];
//     }
//     cout<<"array output:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     moveZeros(arr,n,newarray);
//     print(newarray,n);
// return 0;
// }

#include<iostream>
using namespace std;
#include <vector>
void moveZeros(vector<int>& v){
    //writing & is necessary,otherwise this function of no use
    int i=0;
    for(int j=0;j<v.size();j++){
        if(v[j]!=0){
            swap(v[j],v[i]);
            i++;
        }
    }

}
void print(vector<int> ans){
    cout<<"after moving zeros:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
int main(){
    vector<int> v;
    // vector<int> ans(5,0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(5);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);

    moveZeros(v);
cout<<"before moving zeros:"<<endl;
    for(int i=0;i<5;i++){
        cout<<v[i]<<endl;
    }
    print(v);

return 0;
}

