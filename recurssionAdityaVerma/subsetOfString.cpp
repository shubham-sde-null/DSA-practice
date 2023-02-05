#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <set>
vector<string> getSubset(string str, string output, vector<string> &ans)
{
    if (str.length() == 0)
    {
        ans.push_back(output);
        return ans;
    }
    string op1 = output;
    string op2 = output;
    op2.push_back(str[0]);
    str.erase(str.begin() + 0);
    getSubset(str, op1, ans);
    getSubset(str, op2, ans);
    return ans;
}
int main()
{
    map<string, bool> duplicate;
    set<string> mySet;
    vector<string> ans;
    vector<string> removedDuplicates;
    string str = "aac";
    string output = "";
    getSubset(str, output, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        mySet.insert(ans[i]);
        // cout << ans[i] << " ";
    }
    cout << endl;
    // this is the one way of printing the elements of the set, here what happens is we are running the for loop till the size of set and we are derefrencing the values present at that positon
    for (auto i : mySet)
    {
        removedDuplicates.push_back(i);
    }
    for (int i = 0; i < removedDuplicates.size(); i++)
    {
        cout << removedDuplicates[i] << " ";
    }
    // this is the another way of printing the elemnts of the set, here we say form where to start printing here we must start the begin from one step ahead that's the reason I have used the ++i
    // for (auto i = mySet.begin(); i != mySet.end(); ++i)
    // {
    //     cout << *i << " ";
    // }
    return 0;
}