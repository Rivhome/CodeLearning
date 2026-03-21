### (a) `vector<vector<int>> ivec;`
#### 合法性：合法
#### 定义的作用：
- 这是一个**二维vector**的空定义：
  - 外层`vector`的元素类型是`vector<int>`（存储`int`的vector）；
  - 定义后`ivec`是一个空的二维容器，既没有外层的vector元素，也没有内层的int元素；
  - 类似“空的二维数组”，后续可以通过`push_back`等操作添加行（内层`vector<int>`）和列（`int`值）。
- 补充说明：`vector<vector<int>>`的写法中，`>>`之间的空格在C++11及以上可省略（`vector<vector<int>>`），旧编译器可能需要加空格（`vector<vector<int> >`），但语法本身合法。

---

### (b) `vector<string> svec = ivec;`
#### 合法性：非法
#### 非法原因：
- 核心问题：**类型不匹配**，无法用`vector<vector<int>>`类型的`ivec`初始化`vector<string>`类型的`svec`。
- 详细解释：
  1. `ivec`的类型是`vector<vector<int>>`（存储“int型vector”的容器）；
  2. `svec`的类型是`vector<string>`（存储字符串的容器）；
  3. C++要求初始化时等号两边的容器**元素类型必须完全一致**，`vector<int>`和`string`是完全不同的类型，编译器会直接报错。
- 编译器报错示例（GCC）：
  ```
  error: conversion from 'vector<vector<int>>' to non-scalar type 'vector<string>' requested
  ```
  （含义：试图将`vector<vector<int>>`转换为`vector<string>`类型，该转换不被允许）

---

### (c) `vector<string> svec(10, "null");`
#### 合法性：合法
#### 定义的作用：
- 这是`vector`的**带参数初始化**，作用是：
  1. 创建一个`vector<string>`类型的容器`svec`；
  2. 初始化`svec`包含**10个元素**；
  3. 每个元素的值都是字符串`"null"`（而非空字符串或随机值）。
- 补充说明：
  - 这种初始化方式属于“填充初始化”，第一个参数是元素个数，第二个参数是所有元素的初始值；
  - 等价于先创建空`svec`，再循环10次`push_back("null")`，但效率更高（一次性分配内存）。

---

### 总结
1. (a) 合法：定义空的二维int型vector（`vector<vector<int>>`）；
2. (b) 非法：`vector<vector<int>>`和`vector<string>`类型不匹配，无法赋值初始化；
3. (c) 合法：创建包含10个`"null"`字符串的`vector<string>`。