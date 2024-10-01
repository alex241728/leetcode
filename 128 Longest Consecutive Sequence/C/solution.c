#include "solution.h"

int longestConsecutive(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    qsort(nums, numsSize, sizeof(int), compare);
    int maxLen = 1;
    int consecutiveLen = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i-1] + 1) {
            consecutiveLen++;
        }
        else if (nums[i] == nums[i-1]) {
            continue;
        }
        else {
            if (consecutiveLen > maxLen) {
                maxLen = consecutiveLen;
            }
            consecutiveLen = 1;
        }
    }

    if (consecutiveLen > maxLen) {
        maxLen = consecutiveLen;
    }

    return maxLen;

}

int compare(const void* a, const void* b) {
    return (*((int*) a) - *((int*) b));
}