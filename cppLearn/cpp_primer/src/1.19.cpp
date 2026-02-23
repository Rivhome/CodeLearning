#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (a > b)
    {
        std::cout << "NO!!!" << std::endl;

        return 0;
    }
    while (a <= b)
    {
        std::cout << a << std::endl;

        ++a;
    }

    return 0;
}