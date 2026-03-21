#include <iostream>

using namespace std;

int main()
{
    string s = "abcdefg";

    for (auto& c : s)
    {
        c = 'x';
    }

    cout << s << endl;

    return 0;
}