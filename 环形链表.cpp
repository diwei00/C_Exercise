bool hasCycle(struct ListNode* head)
{
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast != NULL && fast->next != NULL)//单链表跳出条件 奇数和偶数 
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)//追及到的条件
        {
            return true;
        }
    }
    return false;
}