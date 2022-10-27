// #include<iostream>
// using namespace std;
// int main(){
//     string str="MCMXCIV";
//     // int result;
//     int ans=0;
//     cout<<str.length()<<endl;
//     if(str.length()==2){
//         if(str[0]=='I' && str[1]=='V'){
//             ans=4;
//         }
//         if(str[0]=='I' && str[1]=='X'){
//             ans=9;
//         }
//         if(str[0]=='X' && str[1]=='L'){
//             ans=40;
//         }
//         if(str[0]=='X' && str[1]=='C'){
//             ans=90;
//         }
//         if(str[0]=='C' && str[1]=='D'){
//             ans=400;
//         }
//         if(str[0]=='C' && str[1]=='M'){
//             ans=900;
//         }
//     }
//     else{
//         for(int i=0;i<str.length();i++){
//             if(str[i]=='I'){
//                 ans=ans+1;
//             }
//             if(str[i]=='V'){
//                 ans=ans+5;
//             }
//             if(str[i]=='X'){
//                 ans=ans+10;
//             }
//             if(str[i]=='L'){
//                 ans=ans+50;
//             }
//             if(str[i]=='C'){
//                 ans=ans+100;
//             }
//             if(str[i]=='D'){
//                 ans=ans+500;
//             }
//             if(str[i]=='M'){
//                 ans=ans+1000;
//             }
//         }
//     }
// cout<<"the result is:"<<ans<<endl;
// }
// #include<iostream>
// using namespace std;
// bool IsException(char ch){
//     return (ch=='I' || ch=='V' || ch=='X' || ch=='L' || ch=='C' || ch=='D' || ch=='M');
// }
// int main(){
// string str="MCMXCIV";
// int stringLength=str.length()-1;
// int s=0;
// int e=1;
// while (stringLength>=0)
// {
//     if(IsException(str[s]) && IsException(str[e])){

//         // cout<<"one"<<endl;

//         if(str[s]=='I' && str[e]=='V'){
//             cout<<4<<endl;
//             s++;
//         e++;
//         stringLength--;
//         }
//         if(str[s]=='I' && str[e]=='X'){
//             cout<<9<<endl;
//             s++;
//         e++;
//         stringLength--;
//         }
//         if(str[s]=='X' && str[e]=='L'){
//             cout<<40<<endl;
//             s++;
//         e++;
//         stringLength--;
//         }
//         if(str[s]=='X' && str[e]=='C'){
//             cout<<90<<endl;
//             s++;
//         e++;
//         stringLength--;

//         }
//         if(str[s]=='C' && str[e]=='D'){
//             cout<<400<<endl;
//             s++;
//         e++;
//         stringLength--;

//         }
//         if(str[s]=='C' && str[e]=='M'){
//             cout<<900<<endl;
//             s++;
//         e++;
//         stringLength--;
//         }

//         // stringLength--;
//         s++;
//         e++;
//         stringLength--;
//         cout<<"one"<<endl;
//     }
// }

// return 0;
// }
#include<iostream>
using namespace std;
 int valOfRoman(char ch){
        if(ch=='I'){
            return 1;
        }
        if(ch=='V'){
            return 5;
        }
        if(ch=='X'){
            return 10;
        }
        if(ch=='L'){
            return 50;
        }
        if(ch=='C'){
            return 100;
        }
        if(ch=='D'){
            return 500;
        }
        if(ch=='M'){
            return 1000;
        }

    }
int main(){
//    string str="MCMXCIV";
   string str="LVIII";
   int stringLength=str.length()-1;
//    int s=stringLength-1;
int e=stringLength-1;
int ans=valOfRoman(str[str.length()-1]);
cout<<ans<<endl;
cout<<str[e]<<endl;
cout<<valOfRoman(str[e]);
    for(int i=str.length()-2;i>=0;i--){
if(valOfRoman(str[i])<valOfRoman(str[i+1])){
    ans=ans-str[i];
    cout<<"value of ans is"<<ans<<endl;
}
else{
    ans=ans+valOfRoman(str[i]);
}
    }


cout<<"the answer is:"<<ans<<endl;
return 0;
}