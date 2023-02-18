// here the nodes are starting from the 1 not 0, so I have to think about that
// unless I will not do the dry run I won't able to get the conditions
#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <list>
#include <bits/stdc++.h>
int main()
{
    int nodes = 5;
    int edges = 14;
    int edgesMatrix[14][3];
    int source = 1;
    unordered_map<int, list<pair<int, int>>> adj;
    cout << "enter the edges array:" << endl;
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> edgesMatrix[i][j];
        }
    }
    cout << "the entries in the edges matrix is:" << endl;
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << edgesMatrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // this is my adj matrix
    for (int i = 0; i < edges; i++)
    {
        int u = edgesMatrix[i][0];
        int v = edgesMatrix[i][1];
        int w = edgesMatrix[i][2];
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    // from here I am going to write the main logic
    // here I am taking nodes+1 becasue I am considering index number as my node because the nodes are starting from 1
    vector<int> key(nodes + 1);
    vector<int> mst(nodes + 1);
    vector<int> parent(nodes + 1);
    // my nodesa are starting from 1 and it will go to the number of nodes, so if nodes are 5 then I have to include 5 as well
    for (int i = 0; i <= nodes; i++)
    {
        key[i] = INT_MAX;
        mst[i] = false;
        parent[i] = -1;
    }
    key[1] = 0;
    parent[1] = -1;
    // here i will run a loop to find the minimum and and based on that minimun I will find the node u
    // here the for loop can run for even 0 to <nodes, 1 to <=nodes
    for (int i = 1; i < nodes; i++)
    {
        int mini = INT_MAX;
        int u;
        for (int v = 1; v <= nodes; v++)
        {
            if (mst[v] == false && key[v] < mini)
            {
                u = v;
                mini = key[v];
            }
        }
        // mark the min node as true
        mst[u] = true;
        // find the adjacent nodes of the min node
        for (auto neighbour : adj[u])
        {
            int v = neighbour.first;
            int w = neighbour.second;
            // key [0,inf,inf,inf,inf]
            //     [ 0  1   2  3   4]
            //  ex: 0->[1,2] then v=1 w=2
            // 2<key[1]=2<infi=true, then update the key as well as parent
            //
            if (mst[v] == false && w < key[v])
            {
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    // I have to return the result in such a way that it has the node its parent and the weight assiociate between them
    vector<pair<pair<int, int>, int>> result;
    // here why I am using it from the 2 because the parent of my source node which is 1 has parent -1
    for (int i = 2; i <= nodes; i++)
    {
        result.push_back({{parent[i], i}, key[i]});
    }
    cout << "the minumum spannig tree is:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        pair<pair<int, int>, int> temp = result[i];
        pair<int, int> temp1 = temp.first;
        int parentOfNode = temp1.first;
        int parent = temp1.second;
        int weight = temp.second;
        cout << "[" << parentOfNode << "," << parent << "," << weight << "]," << endl;
    }

    return 0;
}