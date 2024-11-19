#include <stdio.h>

#include "solution.h"

int main() {
    struct TreeNode* root = NULL;

    /*
        Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
        Output: true
        Explanation: The root-to-leaf path with the target sum is shown.
    */
    root = createTreeNode(5, 
        createTreeNode(4, 
            createTreeNode(11, 
                createTreeNode(7, NULL, NULL), 
                createTreeNode(2, NULL, NULL)),
            NULL),
        createTreeNode(8, 
            createTreeNode(13, NULL, NULL), 
            createTreeNode(4, 
                NULL, 
                createTreeNode(1, NULL, NULL)))
    );
    printf("%d\n", hasPathSum(root, 22));
    freeAll(root);

    /*
        Input: root = [1,2,3], targetSum = 5
        Output: false
        Explanation: There are two root-to-leaf paths in the tree:
        (1 --> 2): The sum is 3.
        (1 --> 3): The sum is 4.
        There is no root-to-leaf path with sum = 5.
    */
    root = createTreeNode(1, 
        createTreeNode(2, NULL, NULL),
        createTreeNode(3, NULL, NULL)
    );
    printf("%d\n", hasPathSum(root, 5));
    freeAll(root);

    /*
        Input: root = [], targetSum = 0
        Output: false
        Explanation: Since the tree is empty, there are no root-to-leaf paths.
    */
    printf("%d\n", hasPathSum(NULL, 0));
    
    return 0;
}