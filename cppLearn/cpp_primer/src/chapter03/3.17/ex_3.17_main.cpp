#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    vector<string> words;
    string word;

    cout << "Enter:" << endl;
    while (cin >> word)
    {
        words.push_back(word);
    }

    for (auto &str : words)
    {
        for (auto &c : str)
        {
            c = toupper(c);
        }
    }

    int count = 0;
    for (const auto &str : words)
    {
        cout << str << " ";
        ++count;
        if (count % 8 == 0)
        {
            cout << endl;
        }
    }
    if (count % 8 != 0)
    {
        cout << endl;
    }

    return 0;
}