#include <iostream>
using namespace std;
#include <vector>
#include <map>
int main()
{
    map<char, int> m;
    vector<char> temp;
    temp.push_back('a');
    temp.push_back('b');
    temp.push_back('b');
    temp.push_back('b');
    temp.push_back('b');
    temp.push_back('b');
    temp.push_back('b');
    temp.push_back('b');
    temp.push_back('b');
    temp.push_back('b');
    temp.push_back('b');
    temp.push_back('b');

    for (int i = 0; i < temp.size(); i++)
    {
        m[temp[i]] = ++m[temp[i]];
    }
    int j = 0;
    for (auto i : m)
    {
        if (j < temp.size() && i.second > 1 && i.second < 9)
        {
            temp[j++] = i.first;
            temp[j++] = i.second + '0';
        }
        else if (j < temp.size() && i.second > 9)
        {
            string hold = to_string(i.second);
            temp[j++] = i.first;
            temp[j++] = hold[0];
            temp[j++] = hold[1];
        }
        else
        {
            temp[j++] = i.first;
        }

        cout << i.first << ":" << i.second << endl;
    }
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        if (!isdigit(temp[i]))
        {
            temp.pop_back();
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << "the new size of the temp is:" << temp.size();
    return 0;
}