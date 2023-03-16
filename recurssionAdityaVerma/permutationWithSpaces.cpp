#include <iostream>
using namespace std;
void permutationWithSpaces(string str, string output)
{
    if (str.length() == 0)
    {
        cout << output << endl;
        return;
    }
    string op1 = output;
    string op2 = output;
    op1.push_back(str[0]);
    op2.push_back('_');
    op2.push_back(str[0]);
    str.erase(str.begin() + 0);
    permutationWithSpaces(str, op1);
    permutationWithSpaces(str, op2);
}
int main()
{
    string str = "ABC";
    string output = "";
    output.push_back(str[0]);
    str.erase(str.begin() + 0);
    permutationWithSpaces(str, output);
    return 0;
}