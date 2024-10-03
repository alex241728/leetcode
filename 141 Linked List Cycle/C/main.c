#include <stdlib.h>
#include <stdio.h>

#include "listnode.h"
#include "solution.h"

int main() {
    struct ListNode* head = NULL;
    /*
        Input: head = [3,2,0,-4], pos = 1
        Output: true
        Explanation: There is a cycle in the linked list, 
                     where the tail connects to the 1st node (0-indexed).
    */
    head = append(head, 3);
    head = append(head, 2);
    head = append(head, 0);
    head = append(head, -4);
    head->next->next->next->next = head->next;
    printf("%d\n", hasCycle(head));
    head->next->next->next->next = NULL;
    freeList(head);

    /*
        Input: head = [1,2], pos = 0
        Output: true
        Explanation: There is a cycle in the linked list, 
                     where the tail connects to the 0th node.
    */
    head = NULL;
    head = append(head, 1);
    head = append(head, 2);
    head->next->next = head;
    printf("%d\n", hasCycle(head));
    head->next->next = NULL;
    freeList(head);

    /*
        Input: head = [1], pos = -1
        Output: false
        Explanation: There is no cycle in the linked list.
    */
    head = NULL;
    head = append(head, 1);
    printf("%d\n", hasCycle(head));

    return 0;
}