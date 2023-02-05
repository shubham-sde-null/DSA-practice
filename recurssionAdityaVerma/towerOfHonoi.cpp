#include <iostream>
using namespace std;
void towerOfHonoi(int n, int s, int h, int d)
{
    // this is the conditon if there is only one plate is present in the source rod
    if (n == 1)
    {
        cout << "moving " << n << " from " << s << " to " << d << endl;
        return;
    }
    // if the base condition is not true then I will move the my rings from s to h and once n-1 rings are shifed to the h then I will send the ring from s to d
    towerOfHonoi(n - 1, s, d, h);
    cout << "moving " << n << " from " << s << " to " << d << endl;
    towerOfHonoi(n - 1, h, s, d);
}
int main()
{
    int s = 1;
    int h = 2;
    int d = 3;
    int n = 3;
    towerOfHonoi(n, s, h, d);
    return 0;
}