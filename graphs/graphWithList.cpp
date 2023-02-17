#include <iostream>
using namespace std;
#include <unordered_map>
#include <list>
class graph
{
public:
    // here I have declared the map which will take two things first is the int which will take the int and the other is the list which will store the nodes adajacent to the node
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction)
    {
        // here I have used the direction for directed and the undirected graph, if direction is 0 then it means undirected graph so I have to add the edges for both the nodes, and if direction is 1 then I have to just add the edge in only one direction
        // create an edge between u to v, this is mandatory either it is directed or undirected
        adj[u].push_back(v);
        // now based on the direction I have to add the edge in reverse direction
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printadjlist()
    {
        // since I am using the map and inside map there is pair and we access pair using first and second
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph g;
    int n;
    cout << "enter the number of nodes:" << endl;
    cin >> n;
    int m;
    cout << "entet the number of edges:" << endl;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // here I am considering the undirected graph
        g.addEdge(u, v, 0);
    }
    g.printadjlist();
    return 0;
}