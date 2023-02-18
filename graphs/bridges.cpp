#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <list>
void dfs(int node, int parent, int &timer, vector<int> &disc, vector<int> &low, vector<vector<int>> &result, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited)
{
    // first I wil make the visited of node as true
    visited[node] = true;
    // and dicovery time and the low time will be initially equal to the time which I got initially
    disc[node] = low[node] = timer;
    timer++;
    // now I will go the adjacent node of the node which I have received in the dfs function
    for (auto neighbour : adj[node])
    {
        // if my neighbour is equal to the neighbour then I have to ignore because in this case I can't change the low as well as I can't traverse back because it will be already visited
        if (neighbour == parent)
        {
            // ignore means do the continue
            continue;
        }
        else if (!visited[neighbour])
        {
            dfs(neighbour, node, timer, disc, low, result, adj, visited);
            // when I return then I will update my minimum
            // if there is no back edge then I can use the low to compare the lowest time which is only possible if the node is not visited and after return we are checking
            low[node] = min(low[node], low[neighbour]);
            // then after the above step we check if there is any bridge present between them
            if (low[neighbour] > disc[node])
            {
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(neighbour);
                result.push_back(ans);
            }
        }

        else
        {
            // this means there is back edge and at this case we update the low, but at this time we use the low and disc array to compare because ultimately we want the lowest discovery
            low[node] = min(low[node], disc[neighbour]);
            // this way is also wroking
            //  low[node] = min(low[node], low[neighbour]);
        }
    }
}
int main()
{
    int nodes = 5;
    int edges = 4;
    int edgesMatrix[4][3];
    unordered_map<int, list<int>> adj;
    vector<vector<int>> edgesVec{{0, 1},
                                 {3, 1},
                                 {1, 2},
                                 {3, 4}};

    for (int i = 0; i < edgesVec.size(); i++)
    {
        for (int j = 0; j < edgesVec[i].size(); j++)
        {
            cout << edgesVec[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < edgesVec.size(); i++)
    {
        int u = edgesVec[i][0];
        int v = edgesVec[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // this is used to initialize at what time which node is getting parsed by the dfs ans also used to calulate the low time
    int timer = 0;
    vector<int> disc(nodes);
    vector<int> low(nodes);
    // I have to return the result in the format of vector of vector
    vector<vector<int>> result;
    // this is used to say to the parent of the source node or the starting node
    int parent = -1;
    // used to track the node which got visited such that they do not get visited again during traversal
    unordered_map<int, bool> visited;
    // here I am going to initialize the initial values
    for (int i = 0; i < nodes; i++)
    {
        disc[i] = -1;
        low[i] = -1;
    }
    // here I will start the dfs
    for (int i = 0; i < nodes; i++)
    {
        if (!visited[i])
        {
            dfs(i, parent, timer, disc, low, result, adj, visited);
        }
    }

    cout << "the number of bridges present in the graph is:" << result.size() << endl;
    cout << "the edges which are making the bridges are:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}