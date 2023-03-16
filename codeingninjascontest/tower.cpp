// number of blocks required to build the tower
#include <iostream>
using namespace std;
#include <map>
int main()
{
    map<int, int> mp;
    mp[1] = 1;
    int n = 10;
    for (int i = 2; i <= n; i++)
    {
        mp[i] = mp[i - 1] + i;
    }
    for (auto i : mp)
    {
        cout << i.second << " ";
    }
    cout << "enter the number of tower:" << endl;
    int t;
    cin >> t;
    int ans = mp[t];
    cout << ans << endl;
    // cout << "the number of block required will be:" * mp[t].second << endl;

    return 0;
}