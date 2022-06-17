#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};
struct ListNode* removeElements(struct ListNode* head, int val) 
{
    if (head == NULL)
    {
        return NULL;
    }
    //双指针法
    struct ListNode* prev = head;
    struct ListNode* cur = head;
    int flag = 1;
    while (prev != NULL)
    {
        if (prev->val != val)
        {

            cur = prev;
            if (flag == 1)//确定头节点
            {
                head = prev;
            }
            flag = 0;

        }
        else
        {
            cur->next = prev->next;

        }
        prev = prev->next;
    }
    if (head->val == val)
    {
        return NULL;
    }
    else
    {
        return head;
    }

}
void print(struct ListNode* head)
{
    while (head != NULL)
    {

        printf("%d -> ", head->val);

        head = head->next;
    }
}
int main()
{

	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
	head->val = 2;
	struct ListNode* NewNode1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	NewNode1->val = 3;
	head->next = NewNode1;
	struct ListNode* NewNode2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	NewNode2->val = 3;
	NewNode1->next = NewNode2;
    struct ListNode* NewNode3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    NewNode3->val = 6;
    NewNode2->next = NewNode3;
	NewNode3->next = NULL;
    removeElements(head, 3);

    print(head);

	return 0;
}