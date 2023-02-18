#include <iostream>
using namespace std;
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>
#include <list>
void dfs(int node, int parent, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &ap, int &timer)
{
    visited[node] = true;
    disc[node] = low[node] = timer;
    timer++;
    // I am handling this case separetly to handle the source node as articulation point
    int child = 0;
    for (auto neighour : adj[node])
    {
        if (neighour == parent)
        {
            continue;
        }
        if (!visited[neighour])
        {
            dfs(neighour, node, disc, low, visited, adj, ap, timer);
            low[node] = min(low[node], low[neighour]);
            if (low[neighour] >= disc[node] && parent != -1)
            {
                ap[node] = true;
            }
            // if there is some child then I have to also increase the child count
            child++;
        }
        else
        {
            low[node] = min(low[node], disc[neighour]);
        }
    }
    if (parent == -1 && child > 1)
    {
        ap[node] = true;
    }
}
int main()
{
    int n = 5;
    int e = 5;
    vector<pair<int, int>> edges;
    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(3, 4));
    edges.push_back(make_pair(0, 4));
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 2));
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int timer = 0;
    vector<int> disc(n);
    vector<int> low(n);
    unordered_map<int, bool> visited;
    // here I have to store the answer into the ap where all the values are initlaized to 0 at the start and if I find any ap then I am going to put it into this ap
    vector<int> ap(n, 0);
    // here I am going to intialize the defatult values of all the declarations
    for (int i = 0; i < n; i++)
    {
        disc[i] = -1;
        low[i] = -1;
    }
    // here dfs start
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, -1, disc, low, visited, adj, ap, timer);
        }
    }
    // print the articulation points
    for (int i = 0; i < n; i++)
    {
        if (ap[i] != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}