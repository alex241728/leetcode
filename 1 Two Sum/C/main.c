#include <stdio.h>
#include <stdlib.h>

#include "array.h"
#include "solution.h"

int main() {
    int numsSize = 0;
    int* nums = NULL;
    int* ret = NULL;
    int retSize = 0;

    /*
        Input: nums = [2,7,11,15], target = 9
        Output: [0,1]
        Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
    */
    int example1[] = {2,7,11,15};
    numsSize = 4;
    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        exit(1);
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = example1[i];
    }
    ret = twoSum(nums, numsSize, 9, &retSize);
    printArray(ret, retSize);
    free(nums);
    nums = NULL;
    free(ret);
    ret = NULL;

    /*
        Input: nums = [3,2,4], target = 6
        Output: [1,2]
    */
    int example2[] = {3,2,4};
    numsSize = 3;
    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        exit(1);
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = example2[i];
    }
    ret = twoSum(nums, numsSize, 6, &retSize);
    printArray(ret, retSize);
    free(nums);
    nums = NULL;
    free(ret);
    ret = NULL;

    /*
        Input: nums = [3,3], target = 6
        Output: [0,1]   
    */
    int example3[] = {3,3};
    numsSize = 2;
    if ((nums = (int*) malloc(sizeof(int) * numsSize)) == NULL) {
        perror("Cannot allocate memory for 'nums'.");
        exit(1);
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = example3[i];
    }
    ret = twoSum(nums, numsSize, 6, &retSize);
    printArray(ret, retSize);
    free(nums);
    nums = NULL;
    free(ret);
    ret = NULL;

    return 0;
}