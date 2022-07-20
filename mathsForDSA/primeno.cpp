// #include<iostream>
// using namespace std;
// #include<vector>
// bool isPrime(int n){
//     if(n==0 || n==1){
//         return false;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }

//     }
//     return true;
// }
// int main(){
//     int cnt=0;
//     int n;
//     cout<<"enter the number:"<<endl;
//     cin>>n;
//     for(int i=2;i<n;i++){
//         if(isPrime(i)){
//             cnt++;
//         }
//     }
//     cout<<"the totakl number if prime number is:"<<cnt;
//     return 0;
// }


// Traditional way of finding will give us TLE , but sieve method will pass our test cases without tle


#include<iostream>
using namespace std;
#include<vector>
int countPrimes(int n){
    int cnt=0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            //this will only work if prime[i] is true, in the folowing cases we will find those numbers which are nto prime and will make them false such that we can decrease the number of traverse
            cnt++;
            for(int j=2*i;j<n;j=j+i){
                //here we are getting the value of j suppose 2 then we will keep on adding that number 2 , so we will go on 4,6,8 and so on, similar things will happens with other numbers also
                prime[j]=0;
            }
        }
    }
    return cnt;
}
int main(){
    cout<<countPrimes(40);

return 0;
}