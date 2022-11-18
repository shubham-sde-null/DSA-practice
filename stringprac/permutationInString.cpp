#include<iostream>
using namespace std;
bool checkEqual(int arr1[], int arr2[]){
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string str1="eidbaooo";
    string str2="abc";
    int count1 [26]={0};
    int count2 [26]={0};
    for(int i=0;i<str2.length();i++){
        char ch=str2[i];
        int index=0;
        index=ch-'a';
        count1[index]=count1[index]+1;
    }
    // for(int i=0;i<26;i++){
    //     cout<<count1[i]<< " ";
    // }

// for(int i=0;i<str1.length();i++){
//     for(int j=i;j<str2.length();j++){
//         char ch=str1[j];
//         int index=0;
//         index=ch-'a';
//         count2[index]=count2[index]+1;
//         cout<<count2[index]<<endl;
//     }
//     if(checkEqual(count1,count2)){
//         cout<<"the permutation exits"<<endl;
//         break;
//     }
//       for(int j=i;j<str2.length();j++){
//         count2[j]=0;
//     }
// }
// cout<<"the permutation does not exists"<<endl;


    int i=0;
    int winLength=str2.length();
    // while(i<winLength && i<str1.length()){
    //     char ch=str1[i];
    //     int index=0;
    //     index=ch-'a';
    //     count2[index]=count2[index]+1;
    //     i++;
    //     cout<<"one"<<i<<endl;
    // }
    // if(checkEqual(count1,count2)){
    //      return 1;
    // }
    while(i<str1.length()){
        char new_char=str1[i];
        int index=new_char-'a';
        count2[index]=count2[index]+1;
        char old_char=str1[i-winLength];
        index=old_char-'a';
        count2[index]=count2[index]-1;
        i++;
          if(checkEqual(count1,count2)){
 cout<<"the per is eist"<<endl;
            break;
        }


    }
    cout<<"the permutatuion does not exists"<<endl;

return 0;
}