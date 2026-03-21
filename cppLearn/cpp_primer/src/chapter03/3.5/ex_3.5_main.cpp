#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    // a += b;
    a = a + " " + b;
    cout << a << endl;

    return 0;
}