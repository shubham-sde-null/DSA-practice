// note this is the case when both the digits are positive

// #include <iostream>
// using namespace std;
// #include <vector>
// #include <bits/stdc++.h>
// int main()
// {
//     vector<int> l1{1, 0, 1};
//     vector<int> l2{1, 1, 1};
//     int carry = 0;
//     int maxL = max(l1.size(), l2.size()) + 1;
//     vector<int> result(maxL, 0);
//     int i = l1.size();
//     int j = l2.size();
//     int k = result.size() - 1;
//     int run = 0;
//     while (run < i || run < j || carry != 0)
//     {
//         int x = 0;
//         if (run < i && l1[i - 1 - run] == 1)
//         {
//             x = 1;
//         }
//         int y = 0;
//         if (run < j && l2[j - 1 - run] == 1)
//         {
//             y = 1;
//         }
//         result[k] = (x + y + carry) % 2;
//         carry = (x + y + carry) / 2;
//         k--;
//         run++;
//     }
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
//     return 0;
// }
// note this is the case when one digit is positive and the other digit is negative
#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
int main()
{
    // n1=10 n2=-5
    // but we do the addition like this 10+(-5)
    // so I have to find the inverse of 5 in order to get -5
    vector<int> l1{1, 0, 1, 0};
    vector<int> l2{0, 1, 0, 1};
    int tempCarry = 1;
    int temprun = 0;
    int last = l2.size() - 1;
    // here I am going to find the inverse of the 5
    // first step is to inverse the bits
    for (int i = 0; i < l1.size(); i++)
    {
        if (l2[i] == 1)
        {
            l2[i] = 0;
        }
        else
        {
            l2[i] = 1;
        }
    }
    cout << "after invrse:" << endl;
    for (auto i : l2)
    {
        cout << i << ' ';
    }
    cout << endl;
    // step 2 add 1 to the inverse bits
    while (temprun < l2.size() || tempCarry != 0)
    {
        // The main reason of using the x is that we are updating the last digit as well as I have to update the carry if I have used l2[last] directly then what would had happen the last position will be correct but while updating carry I will get wrong answer becasue i am getting the update value of l2[last]
        // l2[last]=(l2[last]+tempcarry)%2;
        //  tempCarry=(l2[last]+tempcarry) //here I am getting the updated value of l2[last]
        int x = 0;
        if (l2[l2.size() - 1 - temprun] == 1)
        {
            x = 1;
        }
        l2[last] = (x + tempCarry) % 2;
        tempCarry = (x + tempCarry) / 2;
        last--;
        temprun++;
    }
    cout << "after adding 1:" << endl;
    for (auto i : l2)
    {
        cout << i << ' ';
    }
    cout << endl;
    int carry = 0;
    // in case of subracting I dont want the one extra size becasue we have to discard the carry at the last step, using extra size is good when we are adding two positive numbers but if one number is negative then I dont haved to use the extra space
    //  int maxL = max(l1.size(), l2.size()) + 1;
    int maxL = max(l1.size(), l2.size());
    vector<int> result(maxL, 0);
    int i = l1.size();
    int j = l2.size();
    int k = result.size() - 1;
    int run = 0;
    while (run < i || run < j || carry != 0)
    {
        int x = 0;
        if (run < i && l1[i - 1 - run] == 1)
        {
            x = 1;
        }
        int y = 0;
        if (run < j && l2[j - 1 - run] == 1)
        {
            y = 1;
        }
        result[k] = (x + y + carry) % 2;
        carry = (x + y + carry) / 2;
        k--;
        run++;
    }
    cout << "final result:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}