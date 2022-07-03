//usingh array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={4,5,8,9,1};
//     int s=0;
//     int e=4;
//     while(s<e){
//         swap(arr[s],arr[e]);
//         //using the stl for swapping the two numbers(saves time)

//         // int temp=arr[e];
//         // arr[e]=arr[s];
//         // arr[s]=temp;
//         //using traditional method

//         s++;
//         e--;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//         cout<<endl;
//     }
// return 0;
// }

//using vector

#include<iostream>
#include<vector>
using namespace std;

//this function is going to reverse an array
vector<int> reverse(vector<int> v){
    // here reverse is the name of function and we want one vector as an argument
    int s=0;
    int e=v.size()-1;
    while (s<e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}
//this is function is going to print the reverse array
vector<int> print(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(1);
    vector<int> ans=reverse(v);
    cout<<"array before reverse"<<endl;

    //this is loop is used to print the vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<"array after reverse is"<<endl;
    print(ans);
return 0;
}

//If we were given to reverse the arrau at specific point or after specific point then we have to dop one change and that is change the value of start.

//     int s=m+1;// suppose we are give after this point we have to change
//     int s=m;// suppose we are give after from this point we have to change
//     int e=v.size()-1;
//     while (s<e)
//     {
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
//rest of the things will remain the same

