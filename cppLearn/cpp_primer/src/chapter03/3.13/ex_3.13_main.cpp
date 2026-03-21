#include <string>
#include <vector>
using std::vector;
using std::string;

int main()
{
    vector<int> v1;        // (a) 空vector
    vector<int> v2(10);    // (b) 10个元素，每个值为0
    vector<int> v3(10, 42); // (c) 10个元素，每个值为42
    vector<int> v4{10};    // (d) 1个元素，值为10
    vector<int> v5{10, 42};// (e) 2个元素，值为10、42
    vector<string> v6{10}; // (f) 10个元素，每个值为空字符串
    vector<string> v7{10, "hi"}; // (g) 10个元素，每个值为"hi"
}
