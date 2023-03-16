#include <iostream>
using namespace std;
#include <vector>
bool isSafe(vector<string> temp, int row, int col, int n)
{
    int x = row;
    int y = col;
    // for checking the row
    while (y >= 0)
    {
        if (temp[x][y] == 'Q')
        {
            return false;
        }
        y--;
    }
    // top diagonal
    x = row;
    y = col;
    while (y >= 0 && x >= 0)
    {
        if (temp[x][y] == 'Q')
        {
            return false;
        }
        x--;
        y--;
    }
    // top downword
    x = row;
    y = col;
    while (y >= 0 && x < n)
    {
        if (temp[x][y] == 'Q')
        {
            return false;
        }
        x++;
        y--;
    }

    return true;
}
void addToAns(vector<vector<string>> &borard, vector<vector<string>> &ans, int n)
{

    for (int i = 0; i < n; i++)
    {
        vector<string> temp;

        for (int j = 0; j < n; j++)
        {
            temp.push_back(borard[i][j]);
        }
        ans.push_back(temp);
    }
}
void solve(int col, vector<vector<string>> &ans, vector<string> temp, int n)
{
    // this is the base condition if the col becomes the n
    if (col == n)
    {
        ans.push_back(temp);
        return;
    }
    // this row is telling I am placing queen one by one in every row for that I have used the for loop and along with that I have called the recursion and backtracking inside it such that if I get the answer then I can put in my ans vector
    for (int row = 0; row < n; row++)
    {
        if (isSafe(temp, row, col, n))
        {
            temp[row][col] = 'Q';
            solve(col + 1, ans, temp, n);
            temp[row][col] = '.';
        }
    }
}
int main()
{
    int n = 4;
    // vector<vector<string>> board(n, vector<string>(n, "."));
    // vector<vector<int>> board({{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}});
    vector<vector<string>> ans;
    vector<string> temp(n, "");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i].push_back('.');
        }
    }
    solve(0, ans, temp, n);
    cout << "the size of the ans is:" << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}