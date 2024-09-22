#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes);
void backtrack(int* nums, int numsSize, int* returnSize, int** returnColumnSizes, int** permutations, int* current, int index);
bool isInArray(int* a, int size, int target);
int factorial(int n);
void print2DNums(int** nums, int rowSize, int* colSize);
void printRow(int* row, int colSize);

int main() {
    int* nums = NULL;
    int numsSize = 0;
    int** ret = NULL;
    int retSize = 0;
    int* retColumnSizes = NULL;

    /*
        Input: nums = [1,2,3]
        Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
    */
    numsSize = 3;
    nums = (int*) malloc(sizeof(int) * numsSize);
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    ret = permute(nums, numsSize, &retSize, &retColumnSizes);
    print2DNums(ret, retSize, retColumnSizes);

    for (int i = 0; i < retSize; i++) {
        free(ret[i]);
    }
    free(ret);
    free(retColumnSizes);
    free(nums);

    /*
        Input: nums = [0,1]
        Output: [[0,1],[1,0]]
    */
    numsSize = 2;
    nums = (int*) malloc(sizeof(int) * numsSize);
    nums[0] = 0;
    nums[1] = 1;
    ret = permute(nums, numsSize, &retSize, &retColumnSizes);
    print2DNums(ret, retSize, retColumnSizes);

    for (int i = 0; i < retSize; i++) {
        free(ret[i]);
    }
    free(ret);
    free(retColumnSizes);
    free(nums);

    /*
        Input: nums = [1]
        Output: [[1]]
    */
    numsSize = 1;
    nums = (int*) malloc(sizeof(int) * numsSize);
    nums[0] = 1;
    ret = permute(nums, numsSize, &retSize, &retColumnSizes);
    print2DNums(ret, retSize, retColumnSizes);

    for (int i = 0; i < retSize; i++) {
        free(ret[i]);
    }
    free(ret);
    free(retColumnSizes);
    free(nums);
    
    return 0;
}

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int size = factorial(numsSize);
    *returnSize = 0;
    *returnColumnSizes = (int*) malloc(sizeof(int) * size);

    int** permutations = (int**) malloc(sizeof(int*) * size);
    int* permutation = (int*) malloc(sizeof(int) * numsSize);
    
    backtrack(nums, numsSize, returnSize, returnColumnSizes, permutations, permutation, 0);

    free(permutation);

    return permutations;
}

void backtrack(int* nums, int numsSize, int* returnSize, int** returnColumnSizes, int** permutations, int* current, int index) {
    if (index == numsSize) {
        permutations[*returnSize] = (int*) malloc(sizeof(int) * numsSize);
        memcpy(permutations[*returnSize], current, sizeof(int) * index);
        (*returnColumnSizes)[*returnSize] = index;
        (*returnSize)++;
        return;
    }

    for (int i = 0; i < numsSize; i++) {
        if (!isInArray(current, index, nums[i])) {
            current[index] = nums[i];
            backtrack(nums, numsSize, returnSize, returnColumnSizes, permutations, current, index + 1);
        }
    }
}

bool isInArray(int* a, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (a[i] == target) {
            return true;
        }
    }
    return false;
} 

int* duplicateArray(int* a, int size) {
    int* new = NULL;
    new = (int*) malloc(sizeof(int) * size);
    if (new == NULL) {
        perror("Cannot allocate memory for a new array.");
        return NULL;
    }

    memcpy(new, a, sizeof(int) * size);

    return new;
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

void print2DNums(int** nums, int rowSize, int* colSize) {
    printf("[");
    int r = 0;
    while (r < rowSize - 1) {
        printRow(nums[r], colSize[r]);
        printf(", ");
        r++;
    }
    printRow(nums[r], colSize[r]);
    printf("]\n");
}

void printRow(int* row, int colSize) {
    printf("[");
    int c = 0;
    while (c < colSize - 1) {
        printf("%d, ", row[c]);
        c++;
    }
    printf("%d]", row[c]);
}