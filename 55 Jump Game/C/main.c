#include <stdlib.h>
#include <stdio.h>

#include "solution.h"

int main() {
    int* nums = NULL;
    int numsSize = 0;

    /*
        Input: nums = [2,3,1,1,4]
        Output: true
        Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
    */
    int e1[] = {2, 3, 1, 1, 4};

    numsSize = sizeof(e1) / sizeof(int);
    
    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e1[i];
    }

    printf("%d\n", canJump(nums, numsSize));

    free(nums);
    nums = NULL;

    /*
        Input: nums = [3,2,1,0,4]
        Output: false
        Explanation: You will always arrive at index 3 no matter what. 
                     Its maximum jump length is 0, which makes it impossible to reach the last index.
    */
    int e2[] = {3, 2, 1, 0, 4};
    
    numsSize = sizeof(e2) / sizeof(int);

    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e2[i];
    }

    printf("%d\n", canJump(nums, numsSize));

    free(nums);
    nums = NULL;

    return 0;
}