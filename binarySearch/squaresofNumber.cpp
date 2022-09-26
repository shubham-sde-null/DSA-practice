// #include<iostream>
// using namespace std;
// #include<math.h>
// bool result(int n){
//     int s=0;
//     int e=sqrt(n);
//     while(s<=e){
//         if(s*s+e*e==n){
//             return true;
//         }
//         else if(s*s+e*e<n){
//             s++;
//         }
//         else{
//             e--;
//         }
//     }
//     return false;
// }
// int main(){
//     int n=29;
//     cout<<result(n)<<endl;
// return 0;
// }

//if in question they have given don't use the math function to solve the question
#include<iostream>
using namespace std;
int finalResult(int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(m*m>n){
            e=m-1;
        }
        else if(m*m<=n){
            ans=m;
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

//this way is working but here the time complexity will be O(temp^2)
// bool solution(int temp,int n){
//     for(int i=0;i<=temp;i++){
//     for(int j=temp;j>=0;j--){
//         if(i*i+j*j==n){
//             return true;
//         }
//     }
// }
// return false;
// }


//
bool solution(int temp,int n){
    int counter=0;
    if(n==1){
        return true;
    }
    int s=0;
    int e=temp;
    while(s<=temp){
        if(s*s+e*e==n){
            counter++;
            cout<<"counter runned for:"<<counter<<" times"<<endl;
            return true;
        }
        else if(s*s+e*e<n){
            counter++;
            s++;
        }
        else{
            counter++;
            e--;
        }
    }

    return false;
}

int main(){
    int n=39;
    int temp=finalResult(n);
    cout<<solution(temp,n);
return 0;
}