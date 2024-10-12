int removeDuplicates(int* nums, int numsSize) {
    int current = nums[0];
    int index = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != current) {
            nums[index] = nums[i];
            current = nums[index];
            index++;
        }
    }
    return index;
}