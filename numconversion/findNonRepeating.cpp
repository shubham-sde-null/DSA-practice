// find the only non repeating element in the array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[7] = {5, 4, 1, 4, 3, 5, 1};
//     int res = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         res = res ^ arr[i];
//     }
//     cout << "the value of the res is:" << res << endl;
//     return 0;
// }
// find the two non repeating element in the array where all the elements repeats twice
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    // here we have to follow few steps in order to get the correct result:
    //  1)first do the exor of all the elements then I will be left with the two numbers which cannot be xored
    // 2) now we have to find the last set bit in the result we obtained above
    // 3) now based on that bit we have to find which bit will give me the correct result
    // 4) divide the array into two parts based on the bits
    // 5) now xor the divided array with the step 1 result
    // step 1
    int arr[8] = {5, 4, 1, 4, 51, 5, 1, 52};
    int res = 0;
    for (int i = 0; i < 8; i++)
    {
        res = res ^ arr[i];
    }
    cout << "the res is:" << res << endl;
    // step 2
    int temp1 = res & ~(res - 1);
    int temp2 = log2(temp1);
    cout << "the position of the last set bit is:" << temp2 << endl;
    // step3, how I will get the 0 if one bit is 1 and the other bit is 0 and if I do the and operation then I will get the correct ans
    vector<int> hold1;
    vector<int> hold2;
    int mask = 1 << temp2;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] & mask == 1)
        {
            hold1.push_back(arr[i]);
        }
        else
        {
            hold2.push_back(arr[i]);
        }
    }
    for (auto i : hold1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : hold2)
    {
        cout << i << " ";
    }
    cout << endl;
    int temph = 0;
    for (int i = 0; i < hold1.size(); i++)
    {
        temph = temph ^ hold1[i];
    }
    cout << "the first value is:" << temph << endl;
    int temph2 = 0;
    for (int i = 0; i < hold2.size(); i++)
    {
        temph2 = temph2 ^ hold2[i];
    }
    cout << "the first value is:" << temph2 << endl;
    int x = temph ^ res;
    int y = temph2 ^ res;
    cout << "the two numbers are:" << x << "&" << y << endl;
}