#include <stdio.h>

#include "solution.h"

int main() {
    struct TreeNode* root = NULL;
    /*
        Input: root = [1,2,2,3,4,4,3]
        Output: true
    */
    root = createTreeNode(1);
    root->left = createTreeNode(2);
    root->right = createTreeNode(2);
    root->left->left = createTreeNode(3);
    root->left->right = createTreeNode(4);
    root->right->left = createTreeNode(4);
    root->right->right = createTreeNode(3);

    printf("%d\n", isSymmetric(root));

    freeAll(root);

    /*
        Input: root = [1,2,2,null,3,null,3]
        Output: false
    */
    root = createTreeNode(1);
    root->left = createTreeNode(2);
    root->right = createTreeNode(2);
    root->left->right = createTreeNode(3);
    root->right->right = createTreeNode(3);

    printf("%d\n", isSymmetric(root));

    freeAll(root);

    return 0;
}