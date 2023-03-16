#include <iostream>
using namespace std;
#include <vector>
bool isSafe(int row, int col, vector<vector<int>> &sudoko, int val)
{
    // her I have to check the value at each location so I have to use the for loop
    for (int i = 0; i < sudoko.size(); i++)
    {
        // for every row of same row number which I got
        // here in row suppose I get 0 then this will check like 0,0 0,1 0,2 0,3...
        if (sudoko[row][i] == val)
        {
            return false;
        }
        // for every column of same column number which I got
        if (sudoko[i][col] == val)
        {
            return false;
        }
        // for checking the 3x3 matrix, this is little bit tricky
        if (sudoko[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val)
        {
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<int>> &sudoko)
{
    for (int row = 0; row < sudoko.size(); row++)
    {
        for (int col = 0; col < sudoko.size(); col++)
        {
            if (sudoko[row][col] == 0)
            {
                for (int val = 1; val <= 9; val++)
                {
                    if (isSafe(row, col, sudoko, val))
                    {
                        // here I am just placing the value I don't know whether I will get the correct result or not
                        sudoko[row][col] = val;
                        // here I will check whether the solution is possible for the value which I have passed
                        bool isPossibleForNext = solve(sudoko);
                        if (isPossibleForNext)
                        {
                            return true;
                        }
                        else
                        {
                            // if the solution is not possible then I have to backtrack
                            sudoko[row][col] = 0;
                        }
                    }
                }
                // here i have tried all the values but i don't got answer then it means return false
                return false;
            }
        }
    }
    // here this means that I don't get any empty place that means everything is correct
    return true;
}
int main()
{
    vector<vector<int>> sudoko({{3, 0, 6, 5, 7, 8, 0, 9, 2}, {5, 2, 9, 1, 3, 4, 7, 6, 8}, {4, 8, 0, 6, 2, 9, 5, 3, 1}, {2, 6, 3, 4, 1, 5, 9, 8, 7}, {9, 7, 4, 8, 6, 3, 1, 2, 5}, {8, 5, 1, 7, 9, 2, 6, 4, 3}, {1, 3, 8, 9, 4, 7, 2, 5, 6}, {6, 9, 2, 3, 5, 0, 8, 7, 4}, {7, 4, 5, 2, 8, 6, 3, 1, 9}});
    cout << "hello" << endl;
    bool result = solve(sudoko);

    if (result)
    {
        cout << "the sudoko is possible" << endl;
    }
    else
    {
        cout << "the sudoko is not possible" << endl;
    }
    return 0;
}