//
// Created by Alex Yang on 2024-10-06.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "solution.h"

int** combine(int n, int k, int* returnSize, int** returnColumnSizes) {
    int num = combination(n, k);

    *returnSize = 0;

    *returnColumnSizes = NULL;
    if ((*returnColumnSizes = (int*) malloc(sizeof(int) * num)) == NULL) {
        perror("Cannot allocate memory for '*returnColumnSizes'.");
        exit(1);
    }

    int** combinations = NULL;
    if ((combinations = (int**) malloc(sizeof(int *) * num)) == NULL) {
        perror("Cannot allocate memory for 'combinations'.");
        exit(1);
    }

    int* combination = NULL;
    if ((combination = (int*) malloc(sizeof(int) * k)) == NULL) {
        perror("Cannot allocate memory for 'combination'.");
        exit(1);
    }

    backtrack(n, k, returnSize, returnColumnSizes, 1, 0, combinations, combination);

    free(combination);

    return combinations;
}

void backtrack(int n, int k, int* returnSize, int** returnColumnSizes, int num, int index, int** combinations, int* combination) {
    if (index == k) {
        combinations[*returnSize] = NULL;
        if ((combinations[*returnSize] = (int*) malloc(sizeof(int) * index)) == NULL) {
            perror("Cannot allocate memory for 'combinations[*returnSize]'.");
            exit(1);
        }

        memcpy(combinations[*returnSize], combination, sizeof(int) * index);
        (*returnColumnSizes)[*returnSize] = index;
        (*returnSize)++;
        return;
    }

    for (int i = num; i <= n; i++) {
        combination[index] = i;
        backtrack(n, k, returnSize, returnColumnSizes, i + 1, index + 1, combinations, combination);
    }
}

int combination(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return combination(n - 1, k - 1) + combination(n - 1, k);
}