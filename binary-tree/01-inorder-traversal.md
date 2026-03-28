1.为什么函数参数中TreeNode* root没有引用, 而vector<int>& res用了引用？

2.为什么inorder函数中res的创建不放在函数体中，而放在参数括号中？

3.return 在递归函数里起什么作用？
  ```text
  递归的终止条件:当 root == nullptr 时，当前这次 inorder() 调用直接结束
  本质上是保护程序，避免访问空指针
  ```

