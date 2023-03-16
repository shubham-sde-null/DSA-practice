#include <iostream>
using namespace std;

#include <set>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;
        for (int i = 0; i < n; i++)
        {
            long long candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies = 0;
        for (int i = 0; i < k; i++)
        {
            auto last_item = (--bags.end());
            long long candy_value = *last_item;
            total_candies += candy_value;
            bags.erase(last_item);
            bags.insert(candy_value / 2);
        }
        cout << total_candies << endl;
    }
    return 0;
}