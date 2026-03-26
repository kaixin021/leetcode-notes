class Solution{
public:
    ListNode* ReverseLinkedList( ListNode* head){
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr){
            ListNode* next = curr -> next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    }
)


#漏掉了返回return prev;

#为什么参数没有引用符号？
#空格是不是无伤大雅？
#是否能对调位置？
#双指针法？
