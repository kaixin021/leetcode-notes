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
  ```text
  结果容器到底应该作为局部变量，还是作为参数传递？
  如果把 res 放到函数内部，每一层递归都会创建一个新的 res
  inorder 的职责不是“返回结果”，而是“把遍历结果写入一个容器”
  inorderTraversal 才负责：创建容器 + 返回结果
  ```

3.return 在递归函数里起什么作用？
  ```text
  递归的终止条件:当 root == nullptr 时，当前这次 inorder() 调用直接结束
  本质上是保护程序，避免访问空指针
  ```

4.为什么要拆成两个函数？
  ```text
  “需要一个在整个递归过程中共享且不断被修改的状态”，而引用参数是实现这一点的最佳方式。
  ```

5.核心算法？
  ```text
  中序遍历 = 左子树 → 当前节点 → 右子树（递归实现）
  时间复杂度:O(n)  每个节点访问一次
  改一行，就变其他遍历：
  前序遍历（中 → 左 → 右）:
    res.push_back(root->val);
    inorder(root->left, res);
    inorder(root->right, res);
  后序遍历（左 → 右 → 中）:
    inorder(root->left, res);
    inorder(root->right, res);
    res.push_back(root->val);
  总结：这段代码的核心算法就是：利用递归，让程序先完整处理左子树，再处理当前节点，最后处理右子树，从而自然得到中序遍历结果。
  ```





