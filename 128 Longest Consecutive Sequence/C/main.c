#include <stdio.h>
#include <stdlib.h>

#include "solution.h"

int main() {
    int* nums = NULL;
    int numsSize = 0;
    /*
        Input: nums = [100,4,200,1,3,2]
        Output: 4
        Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. 
                     Therefore its length is 4.
    */
    numsSize = 6;
    nums = (int*) malloc(sizeof(int) * numsSize);
    nums[0] = 100;
    nums[1] = 4;
    nums[2] = 200;
    nums[3] = 1;
    nums[4] = 3;
    nums[5] = 2;
    printf("%d\n", longestConsecutive(nums, numsSize));
    free(nums);

    /*
        Input: nums = [0,3,7,2,5,8,4,6,0,1]
        Output: 9
    */
    nums = NULL;
    numsSize = 10;
    nums = (int*) malloc(sizeof(int) * numsSize);
    nums[0] = 0;
    nums[1] = 3;
    nums[2] = 7;
    nums[3] = 2;
    nums[4] = 5;
    nums[5] = 8;
    nums[6] = 4;
    nums[7] = 6;
    nums[8] = 0;
    nums[9] = 1;
    printf("%d\n", longestConsecutive(nums, numsSize));
    free(nums);

    return 0;
}