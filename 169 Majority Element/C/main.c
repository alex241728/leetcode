#include <stdio.h>
#include <stdlib.h>

#include "solution.h"

int main() {
    int* nums = NULL;
    int numsSize = 0;

    /*
        Input: nums = [3,2,3]
        Output: 3
    */
    int e1[] = {3, 2, 3};
    numsSize = sizeof(e1) / sizeof(int);
    if ((nums = (int*) malloc(sizeof(int) * numsSize)) ==  NULL) {
        perror("Cannot allocate memory for 'nums'.");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e1[i];
    }
    printf("%d\n", majorityElement(nums, numsSize));
    free(nums);

    /*
        Input: nums = [2,2,1,1,1,2,2]
        Output: 2
    */
    int e2[] = {2, 2, 1, 1, 1, 2, 2};
    numsSize = sizeof(e2) / sizeof(int);
    if ((nums = (int*) malloc(sizeof(int) * numsSize)) ==  NULL) {
        perror("Cannot allocate memory for 'nums'.");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e2[i];
    }
    printf("%d\n", majorityElement(nums, numsSize));
    free(nums);
    
    return 0;
}