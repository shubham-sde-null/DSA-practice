#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// here this eps is ka kaam yeh hai ki low aur high ko agar main compare karun toh mujhe kintna same values milega i.e precision milega, aur uske baad main kya karunga based on the requried precision I will return the answer
double eps = 1e-10;
void squareRoot(int n)
{
    double lo = 1;
    double hi = n;
    double mid = (lo + hi) / 2;
    while (hi - lo > eps)
    {
        if (mid * mid < n)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
        mid = (lo + hi) / 2;
    }
    cout << "the square root of the number is:" << setprecision(10) << lo << endl;
    cout << "the square root of the number is:" << lo << endl;
}
int main()
{
    squareRoot(5);
    return 0;
}