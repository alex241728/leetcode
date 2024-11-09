#include <stdlib.h>

#include "tree_node.h"

struct TreeNode* create(int val) {
    struct TreeNode* newNode = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* leftInsert(struct TreeNode* root, int val) {
    if (root == NULL) {
        return root;
    }

    struct TreeNode* newNode = create(val);
    root->left = newNode;
    return root;
}

struct TreeNode* rightInsert(struct TreeNode* root, int val) {
    if (root == NULL) {
        return root;
    }

    struct TreeNode* newNode = create(val);
    root->right = newNode;
    return root;
}

void freeAll(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    freeAll(root->left);
    freeAll(root->right);
    
    free(root);
}