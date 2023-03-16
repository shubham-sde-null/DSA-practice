#include <iostream>
using namespace std;
#include <vector>
vector<string> permutationCase(string str, string output, vector<string> &ans)
{
    if (str.length() == 0)
    {
        ans.push_back(output);
        return ans;
    }
    string op1 = output;
    string op2 = output;
    // in previous examples I was not taking anything in the first part but here we have to take either small letter or big letter but we have to take something
    op1.push_back(str[0]);
    op2.push_back(toupper(str[0]));
    str.erase(str.begin() + 0);
    permutationCase(str, op1, ans);
    permutationCase(str, op2, ans);
    return ans;
}
int main()
{
    vector<string> result;
    vector<string> ans;
    string str = "ab";
    string output = "";
    permutationCase(str, output, ans);
    cout << "the size of the array is:" << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}