/*
    This solution cannot be passed on LeetCode.
    However, this is the easiest solution written in C in my opinion.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_INT 1000000000
#define MIN_INT -1000000000

bool containsNearbyDuplicate(int* nums, int numsSize, int k);
int min(int a, int b);

int main() {
    int* nums = NULL;
    int numsSize = 0;
    /*
        Input: nums = [1,2,3,1], k = 3
        Output: true
    */
    numsSize = 4;
    nums = malloc(sizeof(int) * numsSize);
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    nums[3] = 1;
    printf("%d\n", containsNearbyDuplicate(nums, numsSize, 3));
    free(nums);

    /*
        Input: nums = [1,0,1,1], k = 1
        Output: true
    */
    numsSize = 4;
    nums = malloc(sizeof(int) * numsSize);
    nums[0] = 1;
    nums[1] = 0;
    nums[2] = 1;
    nums[3] = 1;
    printf("%d\n", containsNearbyDuplicate(nums, numsSize, 1));
    free(nums);

    /*
        Input: nums = [1,2,3,1,2,3], k = 2
        Output: false
    */
    numsSize = 6;
    nums = malloc(sizeof(int) * numsSize);
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    nums[3] = 1;
    nums[4] = 2;
    nums[5] = 3;
    printf("%d\n", containsNearbyDuplicate(nums, numsSize, 2));
    free(nums);

    return 0;
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < min(numsSize, i + k + 1); j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

int min(int a, int b) {
    return a <= b ? a : b;
}