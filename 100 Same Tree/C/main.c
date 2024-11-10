#include <stdio.h>
#include <stdlib.h>

#include "solution.h"

int main() {
    struct TreeNode* p = NULL;
    struct TreeNode* q = NULL;

    /*
        Input: p = [1,2,3], q = [1,2,3]
        Output: true    
    */
    p = create(1);
    p = leftInsert(p, 2);
    p = rightInsert(p, 3);

    q = create(1);
    q = leftInsert(q, 2);
    q = rightInsert(q, 3);

    printf("%d\n", isSameTree(p, q));

    freeAll(p);
    freeAll(q);

    /*
        Input: p = [1,2], q = [1,null,2]
        Output: false
    */
    p = create(1);
    p = leftInsert(p, 2);

    q = create(1);
    q = rightInsert(q, 2);

    printf("%d\n", isSameTree(p, q));

    freeAll(p);
    freeAll(q);

    /*
        Input: p = [1,2,1], q = [1,1,2]
        Output: false
    */
    p = create(1);
    p = leftInsert(p, 2);
    p = rightInsert(p, 1);

    q = create(1);
    q = leftInsert(q, 1);
    q = rightInsert(q, 2);

    printf("%d\n", isSameTree(p, q));

    freeAll(p);
    freeAll(q);

    return 0;
}