// OD7En5wEUJiP
// FKqeaCFIESzo
// getting tle for this test case
// #include <iostream>
// using namespace std;
// #include <vector>
// int main()
// {
//     string str = "OD7En5wEUJiP";
//     vector<char> ans;
//     for (int i = 0; i < str.length(); i++)
//     {
//         char ch = str[i];
//         int temp = ch;
//         if (temp >= 65 && temp <= 122)
//         {
//             ans.push_back(ch);
//         }
//     }
//     cout << "the size of the vector is:" << ans.size() << endl;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

// string str = "1BC";
// for (int i = 0; i < str.length(); i++)
// {
//     str[i] = tolower(str[i]);
// }
// cout << str << endl;
// char ch = str[0];
// int temp = ch;
// cout << temp << endl;
// cout << ch << endl;
// cout << str[0] << endl;
// str[0] = toupper(str[0]);
// str[1] = toupper(str[1]);
// char s = 65;
// char temp = toupper(str[0]);
// str[0] = temp;
// cout << str << endl;
// return 0;
// }
// #include <iostream>
// using namespace std;
// #include <vector>
// int main()
// {
//     vector<vector<string>> board(2, vector<string>(16, "."));
//     for (int i = 0; i < board.size(); i++)
//     {
//         for (int j = 0; j < board[0].size(); j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// #include <vector>
// int main()
// {
//     int n = 4;
//     vector<vector<string>> ans;
//     vector<string> temp(n, "");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             temp[i].push_back('.');
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str = "apjesgpsxoeiokmqmfgvjslcjukbqxpsobyhjpbgdfruqdkeiszrlmtwgfxyfostpqczidfljwfbbrflkgdvtytbgqalguewnhvvmcgxboycffopmtmhtfizxkmeftcucxpobxmelmjtuzigsxnncxpaibgpuijwhankxbplpyejxmrrjgeoevqozwdtgospohznkoyzocjlracchjqnggbfeebmuvbicbvmpuleywrpzwsihivnrwtxcukwplgtobhgxukwrdlszfaiqxwjvrgxnsveedxseeyeykarqnjrtlaliyudpacctzizcftjlunlgnfwcqqxcqikocqffsjyurzwysfjmswvhbrmshjuzsgpwyubtfbnwajuvrfhlccvfwhxfqthkcwhatktymgxostjlztwdxritygbrbibdgkezvzajizxasjnrcjwzdfvdnwwqeyumkamhzoqhnqjfzwzbixclcxqrtniznemxeahfozp";
//     string str2 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//     cout << str2.length() << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// #include <vector>
// int main()
// {
//     string str = "abcd";
//     int lengthofvec = str.length();
//     vector<vector<int>> t(5, vector<int>(5, -1));

//     for (int i = 0; i < lengthofvec; i++)
//     {
//         for (int j = 0; j < lengthofvec; j++)
//         {
//             cout << t[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     int j = 2;
//     bool isTrue = false;
//     string temp = "";
//     temp.append(to_string(i));
//     // temp.push_back(to_string(j));
//     // temp.append('');
//     cout << "the string is:" << temp << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 2;
//     int a = 11;
//     int b = 10;
//     for (int i = 2; i < 5; i++)
//     {
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (a > b)
//             {
//                 int temp = b;
//                 b = a;
//                 a = temp;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         cout << "the value of j is:" << j << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// #include <vector>
// int main()
// {
//     vector<int> temp({7, 2, 5, 10, 8});
//     vector<int> temp1;
//     temp1.assign(temp.begin(), temp.begin() + 2);
//     for (auto val : temp1)
//     {
//         cout << val << " ";
//     }
//     return 0;
//
// #include <iostream>
// using namespace std;
// #include <bits/stdc++.h>
// int main()
// {
//     int arr[5] = {1, 1, 4, 8, 10};
//     // sort(begin(arr), end(arr));
//     // sort(arr, arr + 6);
//     int *add = max_element(arr, arr + 5);
//     cout << "the address of the largest element is:" << add << endl;
//     cout << "the value of the largest element is:" << *add << endl;
//     int occ = count(arr, arr + 5, 1);
//     cout << "the occurence of 1:" << occ << endl;
//     int *lob = lower_bound(arr, arr + 5, 4);
//     cout << "the lower bound is:" << *lob << endl;

//     for (auto i : arr)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// #include <array>
// int main()
// {
//     array<int, 4> a;
//     a[0] = 1;
//     a[1] = 2;
//     a[2] = 3;
//     a[3] = 4;
//     cout << a.at(3);
//     return 0;
// }
#include <iostream>
using namespace std;
#include <set>
int main()
{
    set<int> s;
    set<int>::iterator it = s.begin();
    s.insert(1);
    s.insert(2);
    s.insert(3);
    // s.erase(s.begin(), s.begin() + 2);
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}