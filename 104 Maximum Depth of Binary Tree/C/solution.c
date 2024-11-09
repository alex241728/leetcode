#include <stdlib.h>

#include "solution.h"

int max(int a, int b);

int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return max(left, right) + 1;
}

int max(int a, int b) {
    return a >= b ? a : b;
}