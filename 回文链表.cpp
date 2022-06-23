#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode* next;

};
bool isPalindrome(struct ListNode* head) {
    struct ListNode* phead = head;
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast != NULL && fast->next != NULL)
    {
      
        fast = fast->next->next;
        slow = slow->next;
    }
   
    struct ListNode* p1 = NULL;
    struct ListNode* p2 = slow;
    struct ListNode* p3 = slow->next;
    while (p2 != NULL)
    {
        p2->next = p1;
        p1 = p2;
        p2 = p3;
        if (p3 != NULL)
        {
            p3 = p3->next;
        }
    }
    while (p1 != NULL)
    {
        if (p1->val == phead->val)
        {
            p1 = p1->next;
            phead = phead->next;
            
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{

    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode));
    phead->val = 1;
    struct ListNode* newnode1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    phead->next = newnode1;
    newnode1->val = 2;
    struct ListNode* newnode2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode1->next = newnode2;
    newnode2->val = 2;
    struct ListNode* newnode3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode2->next = newnode3;
    newnode3->val = 1;
    newnode3->next = NULL;
    if (isPalindrome(phead))
    {
        printf("jkhui");
    }
       
    return 0;
}