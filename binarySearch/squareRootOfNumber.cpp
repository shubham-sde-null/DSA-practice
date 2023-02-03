// Q: Square root of number in binary serach
#include <iostream>
using namespace std;
long long int squareRoot(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    long long int mid = (s + e) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        // we are using here long long int because suppose it the value of mid=2^32-1, then multiplication of mid*mid will give us some result which will overflow out of "int", so to avaoid it we are using long long int which can store  very high values

        if (square > n)
        {
            e = mid - 1;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (square == n)
        {
            // else if(mid==key)
            // this is the mistake I was making I was comparing mid with the key which the number of which we are finding the square root
            return mid;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempsol)
{
    // here we are going to check the (tempsol+precison)^2<n, if it's correct then we are going to store it in variable
    double factor = 1;
    // we are using factor, because I want to add the 0.1, 0.2 kind of things in out tempsol, this will give us final result
    double ans = tempsol;
    // here we will keep getting answer and it will get updated if the condition is true
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        // initially when loop will run once our factor will be 1/10 i.e 0.1, second time our loop will ruun and the value will become 0.1/10 i.e 0.01, third and last time our loop will run, because we want precision till three digits and 0.01/10 becomes 0.001 and whatever values we are gettinh in each iteration will be keep getting added till the conditions becomes false
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
            // here what is happening we have  out tempsol in j, suppose 6 so ans=6, j=6,if condition is true then add the fraction in our j i.e 6+0.1 and update the value of ans as j i.e ans=6.1, now value of j becomes 6.1 again the loop will run and condition will be checked if the condition is true update the value of j,and keep doing this untill the condition becomes false
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number of which you want to find the sqaure root:";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << endl;
    }
    int tempsol = squareRoot(n);
    // cout<<"the square root of the number is:"<<squareRoot(n);
    cout << "the square root of the number is:" << morePrecision(n, 3, tempsol);

    return 0;
}