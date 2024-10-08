//
// Created by Alex Yang on 2024-10-08.
//

#include <stdio.h>
#include <stdlib.h>

#include "solution.h"

int** insert(int** intervals, int intervalsSize, int* intervalsColSize,
             int* newInterval, int newIntervalSize,
             int* returnSize, int** returnColumnSizes) {
    int** inserted = NULL;
    if ((inserted = (int**) malloc(sizeof(int*) * (intervalsSize + 1))) == NULL) {
        perror("Cannot allocate memory for 'inserted'");
        exit(1);
    }

    *returnSize = 0;
    if ((*returnColumnSizes = (int*) malloc(sizeof(int) * (intervalsSize + 1))) == NULL) {
        perror("Cannot allocate memory for '*returnColumnSizes'");
        exit(1);
    }

    int i = 0;

    while (i < intervalsSize && newInterval[0] > intervals[i][1]) {
        (*returnColumnSizes)[*returnSize] = 2;

        if ((inserted[*returnSize] = (int*) malloc(sizeof(int) * (*returnColumnSizes)[*returnSize])) == NULL) {
            perror("Cannot allocate memory for 'inserted[*returnSize]'");
            exit(1);
        }

        for (int j = 0; j < intervalsColSize[i]; j++) {
            inserted[*returnSize][j] = intervals[i][j];
        }

        i++;
        (*returnSize)++;
    }

    while (i < intervalsSize && newInterval[1] >= intervals[i][0]) {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }

    (*returnColumnSizes)[*returnSize] = 2;

    if ((inserted[*returnSize] = (int*) malloc(sizeof(int) * (*returnColumnSizes)[*returnSize])) == NULL) {
        perror("Cannot allocate memory for 'inserted[*returnSize]'");
        exit(1);
    }

    for (int j = 0; j < newIntervalSize; j++) {
        inserted[*returnSize][j] = newInterval[j];
    }

    (*returnSize)++;

    while (i < intervalsSize) {
        (*returnColumnSizes)[*returnSize] = 2;

        if ((inserted[*returnSize] = (int*) malloc(sizeof(int) * (*returnColumnSizes)[*returnSize])) == NULL) {
            perror("Cannot allocate memory for 'inserted[*returnSize]'");
            exit(1);
        }

        for (int j = 0; j < intervalsColSize[i]; j++) {
            inserted[*returnSize][j] = intervals[i][j];
        }

        i++;
        (*returnSize)++;
    }

    return inserted;
}

int min(int a, int b) {
    return a <= b ? a : b;
}

int max(int a, int b) {
    return a >= b ? a : b;
}