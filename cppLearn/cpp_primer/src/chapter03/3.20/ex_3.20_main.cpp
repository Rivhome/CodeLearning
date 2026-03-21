#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() {
    vector<int> ivec;
    int num;

    // 步骤1：读取整数存入vector
    cout << "请输入一组整数（输入非数字结束）：\n";
    while (cin >> num) {
        ivec.push_back(num);
    }

    // 空vector检查：避免后续越界访问
    if (ivec.empty()) {
        cout << "未输入任何整数！\n";
        return 1; // 非0返回值表示程序异常退出
    }

    // 步骤2：打印每一对相邻元素的和
    cout << "\n===== 相邻元素的和 =====" << "\n";
    // 遍历到倒数第二个元素（i+1不越界）
    for (int i = 0; i < ivec.size() - 1; ++i) {
        cout << "第" << i+1 << "个与第" << i+2 << "个元素的和："
             << ivec[i] + ivec[i+1] << "\n";
    }

    // 步骤3：打印对称元素的和（第一个&最后一个、第二个&倒数第二个...）
    cout << "\n===== 对称元素的和 =====" << "\n";
    int size = ivec.size();
    // 遍历前半段元素（避免重复计算，如i=0和i=size-1算一次即可）
    for (int i = 0; i < size / 2; ++i) {
        cout << "第" << i+1 << "个与第" << size - i << "个元素的和："
             << ivec[i] + ivec[size - 1 - i] << "\n";
    }

    // 处理奇数个元素的情况：中间元素无配对，单独提示
    if (size % 2 != 0) {
        int mid = size / 2;
        cout << "第" << mid+1 << "个元素（中间元素）无配对，值为：" << ivec[mid] << "\n";
    }

    return 0;
}