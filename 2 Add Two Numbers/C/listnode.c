#include <stdio.h>
#include <stdlib.h>

#include "listnode.h"

struct ListNode* createNode(int val) {
    struct ListNode* newNode = NULL;
    newNode = (struct ListNode*) malloc(sizeof(struct ListNode));
    
    if (newNode == NULL) {
        perror("Cannot allocate memory for a new node!");
        exit(1);
    }

    newNode->val = val;
    newNode->next = NULL;

    return newNode;
}

struct ListNode* append(struct ListNode* head, int val) {
    struct ListNode* newNode = NULL;
    newNode = createNode(val);

    if (head == NULL) {
        return newNode;
    }

    struct ListNode* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void print(struct ListNode* head) {
    printf("[");
    while (head->next != NULL) {
        printf("%d, ", head->val);
        head = head->next;
    }
    printf("%d]\n", head->val);
}

void freeList(struct ListNode* head) {
    struct ListNode* current = head;
    struct ListNode* next = NULL;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}