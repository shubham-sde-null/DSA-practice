#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <list>
#include <stack>
void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj)
{
    visited[node] = true;
    for (auto neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            dfs(neighbour, visited, s, adj);
        }
    }
    s.push(node);
}
void revdfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &transpose)
{
    visited[node] = true;
    for (auto neighbour : transpose[node])
    {
        if (!visited[neighbour])
        {
            revdfs(neighbour, visited, transpose);
        }
    }
}
int main()
{
    int n = 5;
    int e = 5;
    // vector<vector<int>> edges{{0, 1}, {1, 2}, {1, 4}, {2, 3}, {3, 2}, {4, 0}};
    vector<vector<int>> edges{{2, 0}, {0, 1}, {1, 2}, {1, 3}, {3, 4}};
    // this is my adjacency matrix
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        // since this is directed graph so I can't do the reverse pointing of node
        // adj[v].push_back(u);
    }
    // topological sort
    stack<int> s;
    unordered_map<int, bool> visited;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, visited, s, adj);
        }
    }
    // now I have to do the transpose the graph
    // here in I have adjacency like
    /*0 2
      1 0
      2 1
      ...
      so in neighour I got 2 and to its corresponding I will add 0, so the direction have changed

    */
    unordered_map<int, list<int>> transpose;
    for (int i = 0; i < n; i++)
    {
        // when I have used the visited array in the first dfs while topological then all the visited got true, but now I have to call the vistied again so I have make the all visites as false
        visited[i] = 0;
        for (auto neighbour : adj[i])
        {
            transpose[neighbour].push_back(i);
        }
    }
    // now my job is to call the dfs with above topoloical ordering
    // I have to return the number of strongly connected component
    int count = 0;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        if (!visited[top])
        {

            count++;
            // here I have changed the name becasue it has reverse values because old dfs has arguments
            revdfs(top, visited, transpose);
        }
    }
    cout << "the number of strongly connceted components are:" << count << endl;

    return 0;
}