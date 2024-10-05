#include <stdlib.h>

#include "solution.h"

int compare(const void* a, const void* b) {
    int* intervalA = *((int**) a);
    int* intervalB = *((int**) b);
    return intervalA[0] - intervalB[0];
}

int max(int a, int b) {
    return a >= b ? a : b;
}

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes) {
    int** merged = (int**) malloc(sizeof(int*) * intervalsSize);
    qsort(intervals, intervalsSize, sizeof(int*), compare);

    *returnSize = 0;
    *returnColumnSizes = (int*) malloc(sizeof(int) * intervalsSize);

    int* previous = intervals[0];
    for (int i = 1; i < intervalsSize; i++) {
        int* current = intervals[i];

        if (previous[1] >= current[0]) {
            previous[1] = max(previous[1], current[1]);
        }
        else {
            (*returnColumnSizes)[*returnSize] = 2;
            merged[*returnSize] = (int*) malloc(sizeof(int) * (*returnColumnSizes)[*returnSize]);
            merged[*returnSize][0] = previous[0];
            merged[*returnSize][1] = previous[1];
            previous = current;
            (*returnSize)++;
        }
    }

    (*returnColumnSizes)[*returnSize] = 2;
    merged[*returnSize] = (int*) malloc(sizeof(int) * (*returnColumnSizes)[*returnSize]);
    merged[*returnSize][0] = previous[0];
    merged[*returnSize][1] = previous[1];
    (*returnSize)++;

    return merged;
}