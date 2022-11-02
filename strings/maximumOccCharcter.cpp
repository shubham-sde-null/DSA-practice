#include<iostream>
using namespace std;
char maxOccCharcter(string s){
    int arr[26]={0};
    //we are making this array to store all the occurence of characters in our string
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //here we are traversing the string, and in ch we will get particular character, for example we get 'b'
        int number=0;
        //we are using this number to store the result bewteen the chatcter and 'a', like number=ch-'a', number='b'-'a', number=1, now the 1 will point to the 1st position in arr
        number=ch-'a';
        arr[number]++;
        // whatever the position we get at that point whatever is present that will get incremented
    }
    int maxi=-1;
    //we are just initalizing the temp value
    int ans=0;
    //this variable is used to get the final result which will come from the arr[], suppose we get 2 in ans then it will be added to 'a', 2+'a'='c', that means c is the most occuring element
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
            //we will keep on updating till we don't get the position who has maximum charcters, and that will be stored in ans, which will finally added with 'a' and we get our final result
        }
    }
    char finalAns='a'+ans;
    return finalAns;
}
int main(){
    string s;
    cin>>s;
    cout<<maxOccCharcter(s);
return 0;
}