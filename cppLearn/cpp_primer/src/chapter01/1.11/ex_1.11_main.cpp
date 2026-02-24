#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    while (a <= b)
    {
        std::cout << a << std::endl;

        ++a;
    }

    return 0;
}