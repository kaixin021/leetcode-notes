1.工程中是不是“写函数 + 一句调用”？  
  <p style="margin-left:20px;">写法通常是这样分层的：  
      <p style="margin-left:60px;">ListNode* reverseList(ListNode* head) {  
      <p style="margin-left:60px;">// 多行逻辑（核心算法）  
      <p style="margin-left:60px;">}  
    <p style="margin-left:40px;">然后在别的地方调用：  
      <p style="margin-left:60px;">head = reverseList(head);  
  <p style="margin-left:20px;">本质解释：用一句话调用一个已经实现好的复杂逻辑函数

2.为什么返回的是 ListNode*（看起来只是一个结点）？  
  <p style="margin-left:20px;">一个链表，本质就是“头节点的指针”
