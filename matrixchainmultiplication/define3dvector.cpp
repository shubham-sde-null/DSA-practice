#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int n = 4;

    vector<vector<vector<int>>> check(n, vector<vector<int>>(n, vector<int>(2, -1)));
    for (int i = 0; i < check.size(); i++)
    {
        for (int j = 0; j < check[i].size(); j++)
        {
            for (int k = 0; k < check[i][j].size(); k++)
            {
                cout << check[i][j][k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}