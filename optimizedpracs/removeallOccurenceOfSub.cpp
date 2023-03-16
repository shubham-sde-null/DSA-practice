#include <iostream>
using namespace std;
#include <vector>
int main()
{
    string s1 = "daabcbaabcbc";
    string s2 = "abc";
    while (s1.length() != 0)
    {
        if (s1.find(s2) != -1)
        {
            s1.erase(s1.find(s2), s2.length());
        }
        else
        {
            if (s1.find(s2) == -1)
            {
                break;
            }
            continue;
        }

    }
    cout << s1 << endl;

    return 0;
}