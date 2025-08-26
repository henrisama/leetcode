#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;

    struct ListNode* result = (struct ListNode*) malloc(sizeof(struct ListNode));

    struct ListNode* current = result;

    while(l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry; 
          
        if (l1 != NULL) { 
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) { 
            sum += l2->val;
            l2 = l2->next;
        }

        current->val = sum % 10;

        carry = (sum >= 10) ? 1 : 0;
       
        if (l1 != NULL || l2 != NULL || carry != 0) {
            current->next = (struct ListNode*) malloc(sizeof(struct ListNode));
            current = current->next;
        } else {
            current->next = NULL;
        }
    }

    return result;
}