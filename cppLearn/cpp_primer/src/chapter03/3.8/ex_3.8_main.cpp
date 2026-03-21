#include <iostream>

using namespace std;

int main()
{
    string s = "abcdefg";
    string s1 = s;

    int idx = 0;
    while (idx < s.size())
    {
        s[idx] = 'X';
        ++idx;
    }

    cout << s << endl;

    for (int i = 0; i < s1.size(); ++i)
    {
        s1[i] = 'X';
    }

    cout << s1 << endl;


}