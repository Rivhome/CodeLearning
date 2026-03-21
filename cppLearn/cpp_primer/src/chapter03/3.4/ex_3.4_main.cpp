#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string a, b;
    std::cin >> a >> b;

    if (a == b)
    {
        std::cout << "==" << std::endl;
    }
    else if (a >= b)
    {
        std::cout << ">=" << std::endl;
    }
    else
    {
        std::cout << "<=" << std::endl;
    }

    // 示例2,用size来比较即可

    return 0;
}