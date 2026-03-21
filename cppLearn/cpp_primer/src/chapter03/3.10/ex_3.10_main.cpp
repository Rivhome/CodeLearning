#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string input, output;
    cout << "Enter" << endl;
    getline(cin, input);

    for (char c : input)
        if (!ispunct(c))
            output += c;

    cout << output << endl;
}