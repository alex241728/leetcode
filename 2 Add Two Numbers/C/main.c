#include <stdlib.h>

#include "listnode.h"
#include "solution.h"

int main() {
    struct ListNode* l1 = NULL;
    struct ListNode* l2 = NULL;
    struct ListNode* ret = NULL;

    /*
        Input: l1 = [2,4,3], l2 = [5,6,4]
        Output: [7,0,8]
        Explanation: 342 + 465 = 807.
    */
    l1 = append(l1, 2);
    l1 = append(l1, 4);
    l1 = append(l1, 3);
    l2 = append(l2, 5);
    l2 = append(l2, 6);
    l2 = append(l2, 4);
    ret = addTwoNumbers(l1, l2);
    print(ret);
    freeList(l1);
    freeList(l2);
    freeList(ret);
    l1 = NULL;
    l2 = NULL;
    ret = NULL;

    /*
        Input: l1 = [0], l2 = [0]
        Output: [0]
    */
    l1 = append(l1, 0);
    l2 = append(l2, 0);
    ret = addTwoNumbers(l1, l2);
    print(ret);
    freeList(l1);
    freeList(l2);
    freeList(ret);
    l1 = NULL;
    l2 = NULL;
    ret = NULL;

    /*
        Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
        Output: [8,9,9,9,0,0,0,1]
    */
    l1 = append(l1, 9);
    l1 = append(l1, 9);
    l1 = append(l1, 9);
    l1 = append(l1, 9);
    l1 = append(l1, 9);
    l1 = append(l1, 9);
    l1 = append(l1, 9);
    l2 = append(l2, 9);
    l2 = append(l2, 9);
    l2 = append(l2, 9);
    l2 = append(l2, 9);
    ret = addTwoNumbers(l1, l2);
    print(ret);
    freeList(l1);
    freeList(l2);
    freeList(ret);
    l1 = NULL;
    l2 = NULL;
    ret = NULL;

    return 0;
}