//Q: length of string
//Q: Reverse of string
// #include<iostream>
// using namespace std;
// void reverse(char name[],int count){
//     int s=0;
//     int e=count-1;
//     while (s<e)
//     {
//         swap(name[s],name[e]);
//         s++;
//         e--;
//     }

// }
// int count(char name[]){
//     int count=0;
//     for(int i=0;name[i] != '\0';i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char name[20];
//     cout<<"enter your name:"<<endl;
//     cin>>name;
//     int len=count(name);
//     cout<<"the length if array is:"<<len<<endl;
//     reverse(name,len);
//     cout<<"reverse string is:";
//     cout<<name;
// return 0;
// }

// Using the vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<char> name;
cout<<"enter the name:"<<endl;
name.push_back('a');
name.push_back('b');
name.push_back('c');
name.push_back('d');
cout<<"the string is:";
for(int i=0;i<name.size();i++){
   cout<<name[i];
}
cout<<endl;
int s=0;
int e=name.size()-1;
while (s<e)
{
    swap(name[s],name[e]);
    s++;
    e--;
}
cout<<"the reverse string is:";
for(int i=0;i<name.size();i++){
   cout<<name[i];
}

return 0;
}