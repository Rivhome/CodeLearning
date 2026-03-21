#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10);
    int val = 1;
    for (auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it = val++;
    }

    cout << "翻倍前的vector: ";
    for (auto it = ivec.cbegin(); it != ivec.cend(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it *= 2;
    }

    cout << "翻倍后的vector：";
    for (auto it = ivec.cbegin(); it != ivec.cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}