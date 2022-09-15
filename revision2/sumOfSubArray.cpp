#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> temp;
    int array[3]={1,2,3};
    int sum=0;
    int sumOfSubArray=0;
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            sum=sum+array[j];
            temp.push_back(sum);
        }
        sum=0;
    }
    for(int i=0;i<temp.size();i++){
    sumOfSubArray=sumOfSubArray+temp[i];
    }
    cout<<"the sum of subarray is:"<<sumOfSubArray<<endl;
return 0;
}
//time complexity is n^2