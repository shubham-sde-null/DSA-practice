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
    string str2="ab";
    int final=0;
    int count1 [26]={0};
    int count2 [26]={0};
    for(int i=0;i<str2.length();i++){
        char ch=str2[i];
        int index=0;
        index=ch-'a';
        count1[index]=count1[index]+1;
    }
    int i=0;
    int windowLength=str2.length();
    while(i<windowLength && i<str1.length()){
        char ch=str1[i];
        int index=ch-'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count1,count2)){
        final=1;
    }

    while(i<str1.length()){
        char new_char=str1[i];
        int index=new_char-'a';
        count2[index]++;
        char old_char=str1[i-windowLength];
        index=old_char-'a';
        count2[index]--;
        i++;
        if(checkEqual(count1,count2)){
            final=1;
        }


    }
    if(final==1){
        cout<<"the permutatio exists"<<endl;
    }
    else{
        cout<<"the permutataion does not exists"<<endl;
    }

return 0;
}