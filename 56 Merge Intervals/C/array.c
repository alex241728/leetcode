#include <stdio.h>

#include "array.h"

void print2dIntArray(int** arr, int size, int* colSize) {
    if (size == 0) {
        printf("[]");
        return;
    }

    printf("[");
    int i = 0;
    while (i < size - 1) {
        printIntArray(arr[i], colSize[i]);
        printf(", ");
        i++;
    }
    printIntArray(arr[i], colSize[i]);
    printf("]\n");
}

void printIntArray(int* nums, int size) {
    if (size == 0) {
        printf("[]");
        return;
    }

    printf("[");
    int i = 0;
    while (i < size - 1) {
        printf("%d, ", nums[i]);
        i++;
    }
    printf("%d]", nums[i]);
}