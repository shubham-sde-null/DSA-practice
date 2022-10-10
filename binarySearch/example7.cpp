//Q: Book allocation problem
#include<iostream>
using namespace std;
bool isPossibleSolution(int arr[],int n,int m, int mid){
int studentCount=1;
// initially we are making our solution for the 1st student, and gradully based on the condition we are going to increase the number of students.
int pageSum=0;
//in each element we have the the number of pages in the book, so initially we are making the variable which will store the number of pages and make the partition
for(int i=0;i<=n;i++){
    if(pageSum+arr[i]<=mid){
        pageSum+=arr[i];
        //we wil keep on adding the number of pages in our pagesum till the condition is true, and make a partition about how many books can be allocated to the students
    }
    else{
        studentCount++;
        // if we can't do the further alocation in student one , then we have to go to the second student
        if(studentCount>m || arr[i]>mid){
            // here also there are some conditions to allocate books to the other student, first is the number of students must be smaller then the give number of students and the other is the number of pages present inside the array element must be smaller then the mid, otherwise what will happen is condition will never become true and we can't provide book to other students
            return false;
        }
        pageSum=arr[i];
        //here the book to the other student will be equal to the available pages which are less then the mid.
    }
}
return true;
}
    int allocateBooks(){
    int arr[5]={10,20,30,40,50};
    int s=0;
    //we can't give the 0 books to student, but top solve this problem we are suing the 0 as a refrence, which will not affect our final result.
    int sum=0;
    //we are making the sum because we are using search space, suppose we don't know the values of array and user entered the values in array, it can be anything so we made a search space, thriugh which we will find the result.
    int m=2;
    int n=5;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    //using for loop we found our sum, so now we have the starting and the ending point, to find the mid.
    cout<<"the sum is "<<sum;
    int e=sum;
    int ans=-1;
    //we are using the ans to store the possible solutions, brcause we are finding the minimal possible solution,, there are chances that we will not get the result in first step itself.
    int mid=(s=e)/2;
    while (s<=e)
    {
        //here we made a function which sends us the boolean value either true or false and based on that we are changing the start and the end.
        if(isPossibleSolution(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;


}
int main(){

cout<<"the minimum number of books is "<<allocateBooks();
return 0;
}