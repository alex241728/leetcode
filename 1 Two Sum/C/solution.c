#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);
void print_array(int* a, int size);

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
    numsSize = 4;
    nums = malloc(sizeof(int) * numsSize);
    nums[0] = 2;
    nums[1] = 7;
    nums[2] = 11;
    nums[3] = 15;
    ret = twoSum(nums, numsSize, 9, &retSize);
    print_array(ret, retSize);
    free(nums);
    free(ret);

    /*
        Input: nums = [3,2,4], target = 6
        Output: [1,2]
    */
    numsSize = 3;
    nums = malloc(sizeof(int) * numsSize);
    nums[0] = 3;
    nums[1] = 2;
    nums[2] = 4;
    ret = twoSum(nums, numsSize, 6, &retSize);
    print_array(ret, retSize);
    free(nums);
    free(ret);

    /*
        Input: nums = [3,3], target = 6
        Output: [0,1]   
     */
    numsSize = 2;
    nums = malloc(sizeof(int) * numsSize);
    nums[0] = 3;
    nums[1] = 3;
    ret = twoSum(nums, numsSize, 6, &retSize);
    print_array(ret, retSize);
    free(nums);
    free(ret);

    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* res = malloc(sizeof(int) * 2);
    *returnSize = 2;
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            res[0] = i;
            res[1] = j;
            if ((nums[i] + nums[j]) == target) {
                return res;
            }
        }
    }
    
    res[0] = -1;
    res[1] = -1;
    return res;
}

void print_array(int* a, int size) {
    printf("%s", "[");
    int i = 0;
    while (i < size - 1) {
        printf("%d ", a[i]);
        i++;
    }
    printf("%d]\n", a[i]);
}