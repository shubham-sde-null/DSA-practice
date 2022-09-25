#include<iostream>
using namespace std;
long long int squareRoot(float n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    int final=-1;
    int fd=0.1;
    while(s<=e){
        if(mid*mid>n){
            e=mid-1;
        }
    else if(mid*mid<n){
        ans=mid;
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    return ans;
}
double precision(int n, int precision, int tempSol){
    double factor=10;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n=27;
    int result=squareRoot(n);
    cout<<"the square root of number is:"<<precision(n,3,result);
return 0;
}