#include <iostream>
using namespace std;
#include <unordered_map>
#include <stack>
#include <list>
#include <vector>
#include <bits/stdc++.h>
class Graph
{
public:
    // this is my adjaceny list since here I also have weight on the edges so I am using the pair over here
    unordered_map<int, list<pair<int, int>>> adj;
    // here I will get the u v and the weight which will be called from the main function
    // here the adj list will look like this 1 [3,6], [2,2]
    void addEdge(int u, int v, int weight)
    {
        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p);
    }
    void printAdj()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << ")"
                     << ",";
            }
            cout << endl;
        }
    }
    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s)
    {
        visited[node] = true;
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour.first])
            {
                dfs(neighbour.first, visited, s);
            }
        }
        // once there is no adjaceny to call then the that node will be pushed into the stack
        s.push(node);
    }
    void getShortestPath(int src, vector<int> &dist, stack<int> &s)
    {
        dist[src] = 0;

        while (!s.empty())
        {
            int top = s.top();
            s.pop();
            if (dist[top] != INT_MAX)
            {
                for (auto i : adj[top])
                {
                    // 1 [3,6],[2,2]
                    //  here top is 2, i.first=3, i,second=6 for first iteration
                    // and there is a distance array where all the distance are already stored which is getting chaged based on the conditiion matched
                    if (dist[top] + i.second < dist[i.first])
                    {
                        dist[i.first] = dist[top] + i.second;
                    }
                }
            }
        }
    }
};
int main()
{
    Graph g;
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 3, 6);
    g.addEdge(1, 2, 2);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);
    // since from 5 we are not going anywhere so I am not adding it in the adj list
    g.printAdj();
    // here I am saying the number of nodes
    int n = 6;
    unordered_map<int, bool> visited;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            // here I am not sending the adj becasue I am using the class and inside that class I have defined the adj
            g.dfs(i, visited, s);
        }
    }
    int src = 1;
    vector<int> dist(n);
    // from here I am going to find the minimum distance from the source node

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }
    // I have initialized to 0 because from src to src I can come in 0 distance

    g.getShortestPath(src, dist, s);
    cout << "the distance from the source node 1 is:" << endl;
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }

    return 0;
}