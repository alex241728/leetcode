//
// Created by Alex Yang on 2024-10-06.
//

#include <stdio.h>

#include "array.h"

void print(int** nums, int size, int* columnSizes) {
    printf("[");
    int i = 0;
    while (i < size - 1) {
        printArr(nums[i], columnSizes[i]);
        printf(", ");
        i++;
    }
    printArr(nums[i], columnSizes[i]);
    printf("]\n");
}

void printArr(int* nums, int size) {
    printf("[");
    int i = 0;
    while (i < size - 1) {
        printf("%d, ", nums[i]);
        i++;
    }
    printf("%d]", nums[i]);
}