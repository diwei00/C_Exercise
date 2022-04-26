bool hasCycle(struct ListNode* head)
{
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast != NULL && fast->next != NULL)//�������������� ������ż�� 
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)//׷����������
        {
            return true;
        }
    }
    return false;
}