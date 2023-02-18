// this is used to find the disjoint of the two nodes and how to merge them this approach will be used in the kruskals alogorithm
#include <iostream>
using namespace std;
#include <vector>
// this is used to set the defaults values
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
int minimumSpannigTree(vector<vector<int>> &edges, int n)
{
    // initially I will make a parent vector and the rank vector
    vector<int> parent(n);
    vector<int> rank(n);
    makeSet(parent, rank, n);
}

int main()
{
    return 0;
}