#include <stdio.h>
#include <stdlib.h>

#include "solution.h"
#include "array.h"

int main() {
    int* nums = NULL;
    int numsSize = 0;

    /*
        Input: nums = [1,1,2]
        Output: 2, nums = [1,2,_]
        Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
        It does not matter what you leave beyond the returned k (hence they are underscores).
    */
    int e1[] = {1, 1, 2};
    numsSize = sizeof(e1) / sizeof(int);

    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e1[i];
    }

    printf("%d\n", removeDuplicates(nums, numsSize));
    printIntArray(nums, numsSize);

    free(nums);

    /*
        Input: nums = [0,0,1,1,1,2,2,3,3,4]
        Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
        Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
        It does not matter what you leave beyond the returned k (hence they are underscores).
    */
    int e2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    numsSize = sizeof(e2) / sizeof(int);

    if ((nums = (int*) malloc(sizeof(int))) == NULL) {
        perror("Cannot allocate memory for 'nums'");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e2[i];
    }

    printf("%d\n", removeDuplicates(nums, numsSize));
    printIntArray(nums, numsSize);

    free(nums);

    return 0;
}