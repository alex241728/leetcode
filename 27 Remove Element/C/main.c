#include <stdlib.h>
#include <stdio.h>

#include "solution.h"
#include "array.h"

int main() {
    int* nums = NULL;
    int numsSize = 0;

    /*
        Input: nums = [3,2,2,3], val = 3
        Output: 2, nums = [2,2,_,_]
        Explanation: Your function should return k = 2, with the first two elements of nums being 2.
        It does not matter what you leave beyond the returned k (hence they are underscores).
    */
    int e1[] = {3, 2, 2, 3};
    numsSize = 4;
    
    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e1[i];
    }

    printf("%d\n", removeElement(nums, numsSize, 3));
    printIntArray(nums, numsSize);

    free(nums);

    /*
        Input: nums = [0,1,2,2,3,0,4,2], val = 2
        Output: 5, nums = [0,1,4,0,3,_,_,_]
        Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
        Note that the five elements can be returned in any order.
        It does not matter what you leave beyond the returned k (hence they are underscores).
    */
    int e2[] = {0, 1, 2, 2, 3, 0, 4, 2};
    numsSize = 8;
    
    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        return 1;
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = e2[i];
    }

    printf("%d\n", removeElement(nums, numsSize, 2));
    printIntArray(nums, numsSize);

    free(nums);

    return 0;
}