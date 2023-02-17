// make sure to dry run it will help in writing the conditions easy
#include <iostream>
using namespace std;
#include <stack>
#include <vector>
#include <unordered_map>
#include <list>
#include <bits/stdc++.h>
int main()
{
    int edgesMatrix[7][3];
    int nodes = 5;
    int edges = 7;
    int source = 0;
    unordered_map<int, list<pair<int, int>>> adj;
    // for(int i=0;i<edges;i++){
    //     int u=
    // }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> edgesMatrix[i][j];
        }
    }
    cout << "the entries in the edges matrix is:" << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << edgesMatrix[i][j] << " ";
        }
        cout << endl;
    }
    // here I am making the adj matrix
    for (int i = 0; i < edges; i++)
    {
        int u = edgesMatrix[i][0];
        int v = edgesMatrix[i][1];
        int w = edgesMatrix[i][2];
        adj[u].push_front(make_pair(v, w));
        adj[v].push_front(make_pair(u, w));
    }
    vector<int> dist(nodes);
    for (int i = 0; i < nodes; i++)
    {
        dist[i] = INT_MAX;
    }
    set<pair<int, int>> st;
    dist[source] = 0;
    // here I am adding the pair of distance and source node inside the set
    st.insert(make_pair(0, source));
    while (!st.empty())
    {
        // here I am using the iterator to find the minimum element in the set
        auto top = *st.begin();
        int nodeDistance = top.first;
        int topNode = top.second;
        st.erase(st.begin());
        for (auto neighbour : adj[topNode])
        {
            // what I used to do is that I add the distance of the current node plus the distance of node where I am going
            if (nodeDistance + neighbour.second < dist[neighbour.first])
            {

                // now I have to fing is there any node already present in the set if there is some node then remove it from the set
                //  I have to find the old distace and the node
                auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
                // If I got some record then I have to delete that record
                if (record != st.end())
                {
                    st.erase(record);
                }
                dist[neighbour.first] = nodeDistance + neighbour.second;
                // push the record indside the set
                st.insert(make_pair(dist[neighbour.first], neighbour.first));
            }
        }
    }
    cout << "the min ditacnce array is:" << endl;
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }
    return 0;
}