#include <stdlib.h>

#include "solution.h"

struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL) {
        return root;
    }

    invertTree(root->left);
    invertTree(root->right);
    
    struct TreeNode* left = root->left;
    root->left = root->right;
    root->right = left;

    return root;
}