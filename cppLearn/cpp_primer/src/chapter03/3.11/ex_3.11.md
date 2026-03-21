核心错误：常量字符串的字符不能绑定到非常量引用，导致范围 for 语句不合法；
c 的类型：修正为 const auto &c 后，类型是 const char &；去掉 s 的 const 后，auto &c 类型是 char &；
核心规则：const 对象只能绑定到 const 引用，避免通过引用修改常量。