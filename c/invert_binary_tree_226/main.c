#include <stdio.h>

#include "solution.h"

int main() {
    struct TreeNode* root = NULL;

    /*
        Input: root = [4,2,7,1,3,6,9]
        Output: [4,7,2,9,6,3,1]
    */
    root = createTreeNode(4);
    root->left = createTreeNode(2);
    root->right = createTreeNode(7);
    root->left->left = createTreeNode(1);
    root->left->right = createTreeNode(3);
    root->right->left = createTreeNode(6);
    root->right->right = createTreeNode(9);

    printLevelOrder(invertTree(root));
    printf("\n");

    freeAll(root);

    /*
        Input: root = [2,1,3]
        Output: [2,3,1]
    */
    root = createTreeNode(2);
    root->left = createTreeNode(1);
    root->right = createTreeNode(3);

    printLevelOrder(invertTree(root));
    printf("\n");

    freeAll(root);

    /*
        Input: root = []
        Output: []
    */
    printLevelOrder(invertTree(NULL));
    printf("\n");

    return 0;
}