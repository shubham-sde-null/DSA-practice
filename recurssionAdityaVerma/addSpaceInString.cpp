#include <iostream>
using namespace std;
#include <vector>
int main()
{
    string s = "icodeinpython";
    int array[4] = {1, 5, 7, 9};
    int totalSize = s.length() + 4;
    // char ans[totalSize];
    string str(totalSize, ' ');
    // vector<char> ans;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < s.length() && j < 4)
    {
        int insertIndex = array[j];
        while (i < insertIndex && j < 4)
        {
            str[k] = s.at(i);
            k++;
            i++;
        }
        str[k] = ' ';
        k++;
        j++;
    }
    while (i < s.length())
    {
        str[k] = s.at(i);
        k++;
        i++;
    }
    for (int i = 0; i < totalSize; i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}