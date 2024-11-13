#include <stdio.h>
#include <stdlib.h>

#include "tree_node.h"
#include "../../queue/queue_node.h"

struct TreeNode* createTreeNode(int val, struct TreeNode* left, struct TreeNode* right) {
    struct TreeNode* newNode = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = left;
    newNode->right = right;
    return newNode;
}

void freeAll(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    freeAll(root->left);
    freeAll(root->right);
    
    free(root);
}

void printInOrder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    printInOrder(root->left);

    printf("%d ", root->val);

    printInOrder(root->right);
}

void printPreOrder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    printf("%d ", root->val);

    printPreOrder(root->left);

    printPreOrder(root->right);
}

void printPostOrder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    printPostOrder(root->left);

    printPostOrder(root->right);

    printf("%d ", root->val);
}

void printLevelOrder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    Queue* q = createQueue();
    enqueue(q, root);

    while (!isQueueEmpty(q)) {
        struct TreeNode* current = dequeue(q);

        printf("%d ", current->val);

        if (current->left != NULL) {
            enqueue(q, current->left);
        }

        if (current->right != NULL) {
            enqueue(q, current->right);
        }
    }

    freeQueue(q);
}