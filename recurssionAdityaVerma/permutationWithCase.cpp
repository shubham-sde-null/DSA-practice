// #include <iostream>
// using namespace std;
// #include <vector>
// bool isIntInStr(char ch)
// {
//     char temp = ch;
//     int temp1 = temp;
//     if (temp1 >= 48 && temp1 <= 57)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// vector<string> permutationString(string str, string output, vector<string> &ans)
// {
//     if (str.length() == 0)
//     {
//         ans.push_back(output);
//         return ans;
//     }

//     if (isIntInStr(str[0]))
//     {
//         string op1 = output;
//         op1.push_back(str[0]);
//         str.erase(str.begin() + 0);
//         permutationString(str, op1, ans);
//     }
//     else
//     {
//         string op1 = output;
//         string op2 = output;
//         op1.push_back(tolower(str[0]));
//         op2.push_back(toupper(str[0]));
//         str.erase(str.begin() + 0);
//         permutationString(str, op1, ans);
//         permutationString(str, op2, ans);
//     }

//     return ans;
// }
// int main()
// {
//     // string str = "OD7En5wEUJiP";
//     string str = "a1b2";
//     vector<string> ans;
//     for (int i = 0; i < str.length(); i++)
//     {
//         str[i] = tolower(str[i]);
//     }
//     // for (int i = 0; i < str.length(); i++)
//     // {
//     //     cout << str[i] << " ";
//     // }
//     string output = "";
//     permutationString(str, output, ans);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
#include <vector>
vector<string> permutataionWithCase(string str, string output, vector<string> &ans)
{
    if (str.length() == 0)
    {
        ans.push_back(output);
        return ans;
    }
    if (isalpha(str[0]))
    {
        string op1 = output;
        string op2 = output;
        op1.push_back(tolower(str[0]));
        op2.push_back(toupper(str[0]));
        str.erase(str.begin() + 0);
        permutataionWithCase(str, op1, ans);
        permutataionWithCase(str, op2, ans);
    }
    else
    {
        string op1 = output;
        op1.push_back(str[0]);
        str.erase(str.begin() + 0);
        permutataionWithCase(str, op1, ans);
    }
    return ans;
}
int main()
{
    vector<string> ans;
    string output = "";
    string str = "FKqeaCFIESzo";
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    permutataionWithCase(str, output, ans);
    cout << ans.size();
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    return 0;
}