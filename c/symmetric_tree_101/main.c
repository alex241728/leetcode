#include <stdio.h>

#include "solution.h"

int main() {
    struct TreeNode* root = NULL;
    /*
        Input: root = [1,2,2,3,4,4,3]
        Output: true
    */
    root = createTreeNode(1, 
        createTreeNode(2, 
            createTreeNode(3, NULL, NULL), 
            createTreeNode(4, NULL, NULL)),
        createTreeNode(2, 
            createTreeNode(4, NULL, NULL), 
            createTreeNode(3, NULL, NULL))
    );

    printf("%d\n", isSymmetric(root));

    freeAll(root);

    /*
        Input: root = [1,2,2,null,3,null,3]
        Output: false
    */
    root = createTreeNode(1, 
        createTreeNode(2, 
            NULL, createTreeNode(3, NULL, NULL)),
        createTreeNode(2, 
            NULL, createTreeNode(3, NULL, NULL))
    );

    printf("%d\n", isSymmetric(root));

    freeAll(root);

    return 0;
}