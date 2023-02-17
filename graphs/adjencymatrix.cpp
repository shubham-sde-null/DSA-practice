#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int N = 5;
// if there is 1 based indexing then I will increase the size of the array by 1,othewise there is no need to increase the size of the array
int adj[6][6];
int M = 4;
void createArray(int adj[][6], int arr[][2])
{
    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            adj[i][j] = 0;
        }
        for (int i = 0; i < M; i++)
        {
            int x = arr[i][0];
            int y = arr[i][1];
            // since this is undirected graph that the reason I am making both x to y and y to x as 1
            adj[x][y] = 1;
            adj[y][x] = 1;
        }
    }
}
void printArray(int adj[][6])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    N = 5;
    int arr[4][2] = {{1, 2}, {2, 3}, {4, 5}, {1, 5}};
    createArray(adj, arr);
    printArray(adj);
    return 0;
}