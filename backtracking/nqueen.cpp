#include <iostream>
using namespace std;
#include <vector>
bool isSafe(vector<vector<int>> &board, int row, int col, int n)
{
    int x = row;
    int y = col;
    // for checking the row
    while (y >= 0)
    {
        if (board[x][y] == 1)
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
        if (board[x][y] == 1)
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
        if (board[x][y] == 1)
        {
            return false;
        }
        x++;
        y--;
    }

    return true;
}
void addToAns(vector<vector<int>> &borard, vector<vector<int>> &ans, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            temp.push_back(borard[i][j]);
        }
    }
    ans.push_back(temp);
}
void solve(int col, vector<vector<int>> &board, vector<vector<int>> &ans, int n)
{
    // this is the base condition if the col becomes the n
    if (col == n)
    {
        addToAns(board, ans, n);
        return;
    }
    // this row is telling I am placing queen one by one in every row for that I have used the for loop and along with that I have called the recursion and backtracking inside it such that if I get the answer then I can put in my ans vector
    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 1;
            solve(col + 1, board, ans, n);
            board[row][col] = 0;
        }
    }
}
int main()
{
    int n = 4;
    // vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> board({{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}});
    vector<vector<int>> ans;
    solve(0, board, ans, n);
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