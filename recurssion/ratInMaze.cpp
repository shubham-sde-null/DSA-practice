#include<iostream>
using namespace std;
#include <bits/stdc++.h>
#include<vector>
bool isSafe(int x, int y,int n,vector<vector<int>> visited,vector<vector<int>> &m ){
if((x>=0 && x<n) && (y>=0 && y<n) && (visited[x][y]==0) && (m[x][y]==1)){
return true;
}
else{
    return false;
}
}
void solve(vector<vector<int>> &m,int n, vector<string> &ans,int x, int y,vector<vector<int>> visited, string path){
//you have reached x,y here
//base case
if(x== n-1 && y==n-1){
    ans.push_back(path);
    return;
}
//here I have reached the destination so now I will make my visited array's x,y position as 1.
visited[x][y]=1;
//4 choice  D/L/R/U

//down
int newx=x+1;
int newy=y;
if(isSafe(newx,newy,n,visited,m)){
path.push_back('D');
solve(m,n,ans,newx,newy,visited,path);
path.pop_back();
//here we will remove D from out path when we will do backtrack
}
//left
newx=x;
newy=y-1;
if(isSafe(newx,newy,n,visited,m)){
path.push_back('L');
solve(m,n,ans,newx,newy,visited,path);
path.pop_back();
//here we will remove L from out path when we will do backtrack
}
//Right
newx=x;
newy=y+1;
if(isSafe(newx,newy,n,visited,m)){
path.push_back('R');
solve(m,n,ans,newx,newy,visited,path);
path.pop_back();
//here we will remove R from out path when we will do backtrack
}
//Up
newx=x-1;
newy=y;
if(isSafe(newx,newy,n,visited,m)){
path.push_back('U');
solve(m,n,ans,newx,newy,visited,path);
path.pop_back();
//here we will remove U from out path when we will do backtrack
}
visited[x][y]=0;
//we will make sure to make the value of visited array to 0 again, because we might get more then 1 path so in that case we will require all the visited values must be 0 again
}
vector<string> findPath(vector<vector<int>> &m, int n){
vector<string> ans;
if(m[0][0]==0){
    //here what we are sayiing if the starting postion is zero then our Rat can't move so at this conditon we will return our empty string
    return ans;
}
int srcx=0;
int srcy=0;
vector<vector<int>> visited=m;
//initalizing all the values of visited vector to zero
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        visited[i][j]=0;
    }
}
string path="";
//here we will store our path
solve(m,n,ans,srcx,srcy,visited,path);
sort(ans.begin(),ans.end());
//here we want to return the answer in lexigical order, for that reason we are sorting our answer over here
return ans;
}
int main(){
    vector<vector<int>> m;
    vector<string> ans;
    m={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<m[i][j];
    //     }
    // }
    ans=findPath(m,4);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

return 0;
}