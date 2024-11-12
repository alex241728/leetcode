#include "stdlib.h"

#include "solution.h"

bool isMirror(struct TreeNode* left, struct TreeNode* right);

bool isSymmetric(struct TreeNode* root) {
    if (root == NULL) {
        return true;
    }

    return isMirror(root->left, root->right);
}

bool isMirror(struct TreeNode* left, struct TreeNode* right) {
    if (left == NULL && right == NULL) {
        return true;
    }
    else if (left == NULL || right == NULL) {
        return false;
    }

    return isMirror(left->left, right->right) && 
    isMirror(left->right, right->left) && 
    left->val == right->val;

}