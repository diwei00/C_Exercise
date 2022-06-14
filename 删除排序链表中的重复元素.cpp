#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode* next;
};
struct ListNode* deleteDuplicates(struct ListNode* head) {
    //循环遍历，如果当前节点值等于下一个节点值，则将当前节点下一个
    //节点设为下下个节点，跳过相同值的节点
    //否则，当前节点等于下个节点，向后遍历链表
    struct ListNode* phead = head;
    if (phead == NULL)
    {
        return head;
    }
    while (phead->next != NULL)
    {
        if (phead->val == phead->next->val)
        {
            phead->next = phead->next->next;
        }
        else
        {
            phead = phead->next;
        }

    }
    return head;

}
void print(struct ListNode* phead)
{
    while (phead != NULL)
    {
        printf("%d -> ", phead->val);
        phead = phead->next;
    }
}
int main()
{
    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode));
    phead->val = 2;
    struct ListNode* newnode1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    phead->next = newnode1;
    newnode1->val = 2;
    struct ListNode* newnode2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode1->next = newnode2;
    newnode2->val = 3;
    newnode2->next = NULL;
    deleteDuplicates(phead);
    print(phead);


    return 0;
}
