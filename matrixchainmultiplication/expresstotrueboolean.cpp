// here I have to evaluate the expression to true boolean means I have given a string and on that string I will use the MCM conept to get the answer let's see how
#include <iostream>
using namespace std;
#include <unordered_map>
unordered_map<string, int> mp;
int solve(string s, int i, int j, bool isTrue)
{
    // this is the base condition
    if (i > j)
    {
        return false;
    }
    if (i == j)
    {
        if (isTrue == true)
        {
            return s[i] == 'T';
        }
        else
        {
            return s[i] == 'F';
        }
    }
    // here I will write the memoized function
    string temp = to_string(i);
    temp.push_back(' ');
    temp.append(to_string(j));
    temp.push_back(' ');
    temp.append(to_string(isTrue));
    if (mp.find(temp) != mp.end())
    {
        return mp[temp];
    }
    // if the value is not present in the map then I have to caluclate it again
    int ans = 0;
    for (int k = i + 1; k <= j - 1; k = k + 2)
    {
        int LT = -1;
        string temp1 = to_string(i);
        temp1.push_back(' ');
        temp1.append(to_string(k - 1));
        temp1.push_back(' ');
        temp1.append(to_string(true));
        if (mp.find(temp1) != mp.end())
        {
            LT = mp[temp1];
        }
        else
        {
            LT = solve(s, i, k - 1, true);
            mp[temp1] = LT;
        }
        int LF = -1;
        string temp2 = to_string(i);
        temp2.push_back(' ');
        temp2.append(to_string(k - 1));
        temp2.push_back(' ');
        temp2.append(to_string(false));
        if (mp.find(temp2) != mp.end())
        {
            LF = mp[temp2];
        }
        else
        {
            LF = solve(s, i, k - 1, false);
            mp[temp2] = LF;
        }
        int RT = -1;
        string temp3 = to_string(k + 1);
        temp3.push_back(' ');
        temp3.append(to_string(j));
        temp3.push_back(' ');
        temp3.append(to_string(true));
        if (mp.find(temp3) != mp.end())
        {
            RT = mp[temp3];
        }
        else
        {
            RT = solve(s, k + 1, j, true);
            mp[temp3] = RT;
        }
        int RF = -1;
        string temp4 = to_string(k + 1);
        temp4.push_back(' ');
        temp4.append(to_string(j));
        temp4.push_back(' ');
        temp4.append(to_string(false));
        if (mp.find(temp4) != mp.end())
        {
            RF = mp[temp4];
        }
        else
        {
            RF = solve(s, k + 1, j, false);
            mp[temp4] = RF;
        }

        if (s[k] == '&')
        {
            if (isTrue == true)
            {
                ans = ans + LT * RT;
            }
            else
            {
                ans = ans + LT * RF + LF * RT + LF * RF;
            }
        }
        else if (s[k] == '|')
        {
            if (isTrue == true)
            {
                ans = ans + LT * RT + LT * RF + LF * RT;
            }
            else
            {
                ans = ans + LF * RF;
            }
        }
        else if (s[k] == '^')
        {
            if (isTrue == true)
            {
                ans = ans + LT * RF + LF * RT;
            }
            else
            {
                ans = ans + LT * RT + LF * RF;
            }
        }
    }
    return mp[temp] = ans;
}
int main()
{
    // here i am making sure that there is nothing in the map, like I was use to initlaize the -1 into the 2d matrix
    mp.clear();
    // string s = "T|F&T^F";
    string s = "F|F^T|T";
    int i = 0;
    int j = s.length() - 1;
    // since I want the number of true result so I am passing true in it
    bool isTrue = true;
    int ans = solve(s, i, j, true);
    cout << "the number of possible ways are:" << ans << endl;
    return 0;
}