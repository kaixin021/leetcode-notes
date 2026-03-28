1.什么是哈希表？什么是哈希集合？
  ```text
  1> 哈希表 = 用哈希函数实现的“键值对（key-value）存储结构”
  哈希表就是“用 key 快速找到 value”
  2> 哈希集合 = 只存“key”的哈希表（没有 value）
  哈希集合就是“快速判断某个元素是否存在”
  ```

2.哈希表的成员函数pairs.count(ch)进行什么操作？
  ```text
  unordered_map<char, char> pairs = {
    {')', '('},
    {']', '['},
    {'}', '{'}
  };
  这里的结构是：
  key   → value
  ')'   → '('
  ']'   → '['
  '}'   → '{'
  pairs.count(ch) 的含义是：判断 ch 是否是 map 里的 key
