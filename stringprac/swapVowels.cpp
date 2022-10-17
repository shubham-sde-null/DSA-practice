//here I will first store all the vowels into the new vector and then I will replace the vowels form back to the front such that all the vowels gets replaced
// #include<iostream>
// using namespace std;
// #include<vector>
// bool isVowel(char ch){
//    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
// }
// int main(){
//     int firstPos=-1;
//     vector<char> str;
//     str.push_back('h');
//     str.push_back('e');
//     str.push_back('l');
//     str.push_back('l');
//     str.push_back('o');
//     str.push_back('w');
//     str.push_back('o');
//     str.push_back('r');
//     str.push_back('l');
//     str.push_back('d');
//     int j=0;
//     vector<char> temp;
//      for(int i=0;i<str.size();i++){
//         if(isVowel(str[i])){
//             j++;
//             temp.push_back(str[i]);

//         }
//     }
//      for(int i=0;i<str.size();i++){
//         if(isVowel(str[i])){
//           str[i]=temp[--j];

//         }
//     }
//       for(int i=0;i<str.size();i++){
//         cout<<str[i]<< " ";
//     }

// return 0;
// }

//using the second approach using two pointers

#include<iostream>
using namespace std;
bool isVowel(char ch){
   return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}
int main(){
    string str="leetcode";
    int length=str.length()-1;
    int s=0;
    int e=length;
    while(s<e){
        if(isVowel(str[s]) && isVowel(str[e])){
            swap(str[s],str[e]);
            s++;
            e--;
        }
        //here if the end character is not vowel then I have to change the end
        else if(!isVowel(str[e])){
            e--;

        }
        //here if the start character is not vowel then I have to change the start
       else if(!isVowel(str[s])){
            s++;
        }
    }
    for(int i=0;i<=length;i++){
        cout<<str[i]<<" ";
    }
return 0;
}