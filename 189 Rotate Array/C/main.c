#include <stdio.h>
#include <stdlib.h>

#include "solution.h"
#include "array.h"

int main() {
    int* nums = NULL;
    int numsSize = 0;

    /*
        Input: nums = [1,2,3,4,5,6,7], k = 3
        Output: [5,6,7,1,2,3,4]
        Explanation:
        rotate 1 steps to the right: [7,1,2,3,4,5,6]
        rotate 2 steps to the right: [6,7,1,2,3,4,5]
        rotate 3 steps to the right: [5,6,7,1,2,3,4]
    */
    int e1[] = {1, 2, 3, 4, 5, 6, 7};
    
    numsSize = sizeof(e1) / sizeof(int);

    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e1[i];
    }

    rotate(nums, numsSize, 3);
    printIntArray(nums, numsSize);

    free(nums);
    nums = NULL;

    /*
        Input: nums = [-1,-100,3,99], k = 2
        Output: [3,99,-1,-100]
        Explanation: 
        rotate 1 steps to the right: [99,-1,-100,3]
        rotate 2 steps to the right: [3,99,-1,-100]
    */
    int e2[] = {-1, -100, 3, 99};

    numsSize = sizeof(e2) / sizeof(int);

    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e2[i];
    }

    rotate(nums, numsSize, 2);
    printIntArray(nums, numsSize);

    free(nums);
    nums = NULL;

    return 0;
}