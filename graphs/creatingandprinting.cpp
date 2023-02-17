#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int n;
    cout << "enter the number of nodes in the graph:" << endl;
    cin >> n;
    // here I am taking the number of edges to insert into the edges array
    int m;
    cout << "enter the number of edges to insert into the edges array:" << endl;
    cin >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        int u, v;
        cout << "enter the edge u and edge v:" << endl;
        cin >> u >> v;
        temp.push_back(u);
        temp.push_back(v);
        edges.push_back(temp);
    }
    cout << "the values in the array is:" << endl;
    for (int i = 0; i < edges.size(); i++)
    {
        for (int j = 0; j < edges[0].size(); j++)
        {
            cout << edges[i][j] << " ";
        }
        cout << endl;
    }
    // here I will write the matrix to stroe all the edges into the vector of array
    vector<int> ans[n];

    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        ans[u].push_back(v);
        ans[v].push_back(u);
    }
    // now I want to return the ouput in the form of
    // 0 3
    // 1 2
    // 2 1 3
    // 3 0 2
    // for this reason I am making a double vector where I will print 0 3 in the first row 1 2 in the second row and so on
    vector<vector<int>> res(n);
    cout << "here I am printing the values inside the vector of vector:" << endl;
    for (int i = 0; i < n; i++)
    {
        // cout << i << "->"; this is while printing
        res[i].push_back(i);
        for (auto it = ans[i].begin(); it != ans[i].end(); ++it)
        {
            // cout << *it << " ";
            res[i].push_back(*it);
        }
        // for (int j = 0; j < ans[i].size(); j++)
        // {
        //     // cout << ans[i][j] << " "; this is for printing
        //     // here this ans[i] will bring the vector ans inside that vector I have various value so I accessing those value using[j] so utimately it look like ans[i][j];
        //     res[i].push_back(ans[i][j]);
        // }
    }

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}