#include <stdlib.h>

#include "array.h"
#include "solution.h"

int main() {
    int* nums = NULL;
    int numsSize = 0;
    int returnSize = 0;

    /*
        Input: nums = [1,2,3,4]
        Output: [24,12,8,6]
    */
    int e1[] = {1, 2, 3, 4};

    numsSize = sizeof(e1) / sizeof(int);

    nums = (int*) malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e1[i];
    }

    printIntArray(productExceptSelf(nums, numsSize, &returnSize), returnSize);

    /*
        Input: nums = [-1,1,0,-3,3]
        Output: [0,0,9,0,0]
    */
    int e2[] = {-1, 1, 0, -3, 3};

    numsSize = sizeof(e2) / sizeof(int);

    nums = (int*) malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e2[i];
    }

    printIntArray(productExceptSelf(nums, numsSize, &returnSize), returnSize);

    return 0;
}
