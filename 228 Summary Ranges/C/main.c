#include <stdlib.h>

#include "solution.h"
#include "array.h"

int main() {
    int* nums = NULL;
    int numsSize = 0;
    char** ret = NULL;
    int retSize = 0;

    /*
        Input: nums = [0,1,2,4,5,7]
        Output: ["0->2","4->5","7"]
        Explanation: The ranges are:
        [0,2] --> "0->2"
        [4,5] --> "4->5"
        [7,7] --> "7"
    */
    numsSize = 6;
    int example1[] = {0,1,2,4,5,7};
    nums = (int*) malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        nums[i] = example1[i];
    }
    ret = summaryRanges(nums, numsSize, &retSize);
    printStringArray(ret, retSize);
    free(nums);
    nums = NULL;
    free(ret);
    ret = NULL;

    /*
        Input: nums = [0,2,3,4,6,8,9]
        Output: ["0","2->4","6","8->9"]
        Explanation: The ranges are:
        [0,0] --> "0"
        [2,4] --> "2->4"
        [6,6] --> "6"
        [8,9] --> "8->9"
    */
    numsSize = 7;
    int example2[] = {0,2,3,4,6,8,9};
    nums = (int*) malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        nums[i] = example2[i];
    }
    ret = summaryRanges(nums, numsSize, &retSize);
    printStringArray(ret, retSize);
    free(nums);
    free(ret);

    return 0;
}