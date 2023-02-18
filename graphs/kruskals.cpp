// this is used to find the disjoint of the two nodes and how to merget them
#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
#include <bits./stdc++.h>
// this is used to set the defaults values
bool cmp(vector<int> &a, vector<int> &b)
{
    return a[2] < b[2];
}
void makeSet(vector<int> &parent, vector<int> &rank, int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}
// now we know that if there is chain of parents then we have to return the main node from where all this is starting
int findParent(vector<int> &parent, int node)
{
    if (parent[node] == node)
    {
        return node;
    }
    // here I will call recursively to get the parent till I reach the correct parent
    // since I have to also use the path compression for that finding the parent again and again I can make a new node which will hold the previous result
    return parent[node] = findParent(parent, parent[node]);
}
// now I have to make the union of the nodes
void unionset(int u, int v, vector<int> &parent, vector<int> &rank)
{
    // first get the parent of both the nodes
    u = findParent(parent, u);
    v = findParent(parent, v);
    // now I have to compare the rank of both the nodes which will help us to find who will become the parent of whom
    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[v] < rank[u])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        // here when the rank of both nodes are same then I can do anything but make sure whoever is becoming the parent we need to increase that nodes rank
        rank[u]++;
    }
}
int minimumSpannigTree(vector<vector<int>> &edgesVec, int n)
{
    // initially I will make a parent vector and the rank vector
    // here this cmp is used to compare the two values, if to write cmp keyword in order to define the fucntion and to make it work
    sort(edgesVec.begin(), edgesVec.end(), cmp);
    vector<int> parent(n);
    vector<int> rank(n);
    int minWeight = 0;
    makeSet(parent, rank, n);
    for (int i = 0; i < edgesVec.size(); i++)
    {
        // here I will first find the parent of the each node and then I will compare if the parents of the nodes are same or differnt based on that I will do the other operations
        // here the edgesVec[i][0] will give me the u node and edgesVec[i][1] will give me teh v node
        int u = findParent(parent, edgesVec[i][0]);
        int v = findParent(parent, edgesVec[i][1]);
        int wt = edgesVec[i][2];
        // if both have different parents then I will union them else I have to ignore them
        if (u != v)
        {
            minWeight += wt;
            unionset(u, v, parent, rank);
        }
    }
    return minWeight;
}

int main()
{
    int nodes = 4;
    int edges = 4;
    int edgesMatrix[4][3];
    vector<vector<int>> edgesVec{{0, 1, 3},
                                 {0, 3, 5},
                                 {1, 2, 1},
                                 {2, 3, 8}};

    for (int i = 0; i < edgesVec.size(); i++)
    {
        for (int j = 0; j < edgesVec[i].size(); j++)
        {
            cout << edgesVec[i][j] << " ";
        }
        cout << endl;
    }
    int ans = minimumSpannigTree(edgesVec, nodes);
    cout << "the minimum weight is:" << ans << endl;
    return 0;
}