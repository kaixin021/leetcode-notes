1.为什么函数参数中TreeNode* root没有引用, 而vector<int>& res用了引用？
  ```text
  1> TreeNode* root 为什么不用引用？
  传进来只是为了访问 root->val、访问 root->left / right
  在函数里没有修改 root 本身
  2> vector<int>& res 为什么必须用引用？
  在函数里修改了 res
  要让所有递归层共享同一个 res
  如果不用引用，每次递归都会复制一份 res，修改的是“副本”，不是原来的，最终结果：res = []

  结论：需要修改外部变量 → 用引用（&）；只是读取或用指针访问 → 不需要引用
  ```
    
2.为什么inorder函数中res的创建不放在函数体中，而放在参数括号中？

3.return 在递归函数里起什么作用？
  ```text
  递归的终止条件:当 root == nullptr 时，当前这次 inorder() 调用直接结束
  本质上是保护程序，避免访问空指针
  ```

