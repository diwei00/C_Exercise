#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode* next;

};
void deleteNode(struct ListNode* node) 
{
    node->val = node->next->val;
    node->next = node->next->next;
}

void print(struct ListNode* node)
{
    while (node != NULL)
    {
        printf("%d ->", node->val);
        node = node->next;
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
    deleteNode(phead->next);

    print(phead);

    return 0;
}