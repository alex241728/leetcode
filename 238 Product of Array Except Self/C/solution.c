#include <stdlib.h>
#include <string.h>

#include "solution.h"

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*) malloc(sizeof(int) * *returnSize);
    for (int i = 0; i < *returnSize; i++) {
        result[i] = 1;
    }

    int i = 0;
    int multiple = 1;
    for (int j = 1; j < numsSize; j++) {
        multiple *= nums[i];
        result[j] *= multiple;
        i++;
    }

    i = numsSize - 1;
    multiple = 1;
    for (int j = numsSize - 2; j >= 0; j--) {
        multiple *= nums[i];
        result[j] *= multiple;
        i--;
    }

    return result;
}