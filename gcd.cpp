
#include <iostream>
using namespace std;
int GCD(long long a, long long b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        if (b > a)
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        int mid = (A + B) / 2;
        int flag = 0;
        for (int i = A; i <= mid; i++)
        {
            for (int j = mid; j <= B; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (GCD(i, j) == C)
                {

                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}