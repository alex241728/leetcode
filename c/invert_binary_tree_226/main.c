#include <stdio.h>

#include "solution.h"

int main() {
    struct TreeNode* root = NULL;

    /*
        Input: root = [4,2,7,1,3,6,9]
        Output: [4,7,2,9,6,3,1]
    */
    root = createTreeNode(4, 
        createTreeNode(2, 
            createTreeNode(1, NULL, NULL), 
            createTreeNode(3, NULL, NULL)),
        createTreeNode(7, 
            createTreeNode(6, NULL, NULL), 
            createTreeNode(9, NULL, NULL))
    );

    printLevelOrder(invertTree(root));
    printf("\n");

    freeAll(root);

    /*
        Input: root = [2,1,3]
        Output: [2,3,1]
    */
    root = createTreeNode(2, 
        createTreeNode(1, NULL, NULL),
        createTreeNode(3, NULL, NULL)
    );

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