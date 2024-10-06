//
// Created by Alex Yang on 2024-10-06.
//

#ifndef COMBINATIONS__SOLUTION_H
#define COMBINATIONS__SOLUTION_H

int** combine(int n, int k, int* returnSize, int** returnColumnSizes);

void backtrack(int n, int k, int* returnSize, int** returnColumnSizes, int num, int index, int **combinations, int *combination);

int combination(int n, int k);

#endif//COMBINATIONS__SOLUTION_H
