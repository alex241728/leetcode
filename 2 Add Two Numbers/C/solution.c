#include <stdlib.h>

#include "listnode.h"
#include "solution.h"

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL) {
        int num = carry;

        if (l1 != NULL) {
            num += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            num += l2->val;
            l2 = l2->next;
        }

        int digit = num % 10;
        carry = num / 10;
        head = append(head, digit);
    }

    if (carry != 0) {
        head = append(head, carry);
    }

    return head;
}