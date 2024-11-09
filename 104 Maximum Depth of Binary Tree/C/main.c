#include <stdio.h>
#include <stdlib.h>

#include "solution.h"

int main() {
    struct TreeNode* root = NULL;

    /*
        Input: root = [3,9,20,null,null,15,7]
        Output: 3
    */
    root = create(3);
    leftInsert(root, 9);
    rightInsert(root, 20);
    leftInsert(root->right, 15);
    rightInsert(root->right, 7);

    printf("%d\n", maxDepth(root));
    freeAll(root);

    /*
        Input: root = [1,null,2]
        Output: 2
    */
    root = create(1);
    rightInsert(root, 2);

    printf("%d\n", maxDepth(root));
    freeAll(root);

    return 0;
}