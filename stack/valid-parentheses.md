1.什么是哈希表？什么是哈希集合？
  ```text
  1> 哈希表 = 用哈希函数实现的“键值对（key-value）存储结构”
  哈希表就是“用 key 快速找到 value”
  （举例：unordered_map<string, int> mp;
  mp["apple"] = 3;）
  2> 哈希集合 = 只存“key”的哈希表（没有 value）
  哈希集合就是“快速判断某个元素是否存在”
  ```
