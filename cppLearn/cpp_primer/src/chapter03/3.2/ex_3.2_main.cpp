#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    string line;
    cout << "enter" << endl;

    // while (getline(cin, line))
    while (cin >> line)
    {
        cout << line << endl;
    }

    return 0;
}