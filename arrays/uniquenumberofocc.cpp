#include <iostream>
using namespace std;
#include <unordered_map>
#include <set>
int main()
{
    unordered_map<int, int> m;
    set<int> s;
    int arr[10] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    for (auto a : arr)
    {
        ++m[a];
    }
    for (auto i : m)
    {
        cout << i.first << ":" << i.second << " ";
    }
    for (auto i : m)
    {
        s.insert(i.second);
    }
    bool flag = false;
    if (m.size() == s.size())
    {
        flag = true;
    }
    if (flag == true)
    {
        cout << "unique occurence present" << endl;
    }
    if (flag == false)
    {
        cout << "no unique occurence is not present" << endl;
    }

    return 0;
}