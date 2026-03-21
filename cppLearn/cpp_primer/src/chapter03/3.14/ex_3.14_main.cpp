#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    int num;

    cout << "Enter" << endl;
    while (cin >> num)
    {
        nums.push_back(num);
    }

    for (int n : nums)
    {
        cout << n << " ";
    }

    cout << endl << nums.size() << endl;

    return 0;
}