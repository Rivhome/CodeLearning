#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a = 0;
    const int* cp = &a;
    int *p = const_cast<int*>(cp);
    *p = 1;
    cout << *p << endl;
    cout << a << endl; 

    return 0; 
}