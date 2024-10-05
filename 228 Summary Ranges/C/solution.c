#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 25

char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    if (numsSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = 0;
    char** ranges = malloc(sizeof(char*) * numsSize);

    int startNum = nums[0];
    int endNum = nums[0];
    for (int i = 1; i < numsSize; i++) {
        int currentNum = nums[i];
        int previousNum = nums[i-1];
        if (currentNum == previousNum + 1) {
            endNum = currentNum;
        }
        else {
            if (startNum == endNum) {
                ranges[*returnSize] = (char*) malloc(sizeof(char) * MAX_STR_LEN);
                if (sprintf(ranges[*returnSize], "%d", startNum) == 0) {
                    perror("Fail to format string.");
                    exit(1);
                }
            }
            else {
                ranges[*returnSize] = (char*) malloc(sizeof(char) * MAX_STR_LEN);
                if (sprintf(ranges[*returnSize], "%d->%d", startNum, endNum) == 0) {
                    perror("Fail to format string.");
                    exit(1);
                }
            }
            (*returnSize)++;
            startNum = nums[i];
            endNum = nums[i];
        }
    }

    if (startNum == endNum) {
        ranges[*returnSize] = (char*) malloc(sizeof(char) * MAX_STR_LEN);
        if (sprintf(ranges[*returnSize], "%d", startNum) == 0) {
            perror("Fail to format string.");
            exit(1);
        }
    }
    else {
        ranges[*returnSize] = (char*) malloc(sizeof(char) * MAX_STR_LEN);
        if (sprintf(ranges[*returnSize], "%d->%d", startNum, endNum) == 0) {
            perror("Fail to format string.");
            exit(1);
        }
    }
    (*returnSize)++;

    return ranges;
}