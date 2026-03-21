#include <iostream>

int main()
{
    //改变指针本身的值
    int a = 10, b = 20;
    int *p = &a;  // p 指向 a
    p = &b;       // 改变指针 p 的值，现在 p 指向 b

    // 改变指针所指对象的值
    int a = 10;
    int *p = &a;
    *p = 20; // 解引用修改 a 的值
}