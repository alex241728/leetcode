#include <stdlib.h>

#include "solution.h"

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* res = (int*) malloc(sizeof(int) * 2);
    *returnSize = 2;
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            res[0] = i;
            res[1] = j;
            if ((nums[i] + nums[j]) == target) {
                return res;
            }
        }
    }
    
    res[0] = -1;
    res[1] = -1;
    return res;
}