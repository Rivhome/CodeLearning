#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> strs;
    string s;

    cout << "Enter:" << endl;
    while (getline(cin, s) && !s.empty())
    {
        strs.push_back(s);
    }

    for (int i = 0; i < strs.size(); ++i)
    {
        cout << i + 1 << " " << strs[i] << endl;
    }

    cout << strs.size() << endl;

    return 0;


}