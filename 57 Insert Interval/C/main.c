#include <stdio.h>
#include <stdlib.h>

#include "array.h"
#include "solution.h"

int main(void) {
    int** intervals = NULL;
    int intervalsSize = 0;
    int* intervalsColSize = NULL;
    int newIntervalSize = 0;
    int* newInterval = NULL;
    int** ret = NULL;
    int returnSize = 0;
    int* returnColumnSizes = NULL;

    /*
     * Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
     * Output: [[1,5],[6,9]]
     */
    int e1[][2] = {{1, 3}, {6, 9}};

    intervalsSize = 2;

    if ((intervalsColSize = (int*) malloc(sizeof(int) * intervalsSize)) == NULL) {
        perror("Cannot allocate memory for 'intervalsColSize'");
        return 1;
    }
    for (int i = 0; i < intervalsSize; i++) {
        intervalsColSize[i] = 2;
    }

    if ((intervals = (int**) malloc(sizeof(int*) * intervalsSize)) == NULL) {
        perror("Cannot allocate memory for 'intervals'");
        return 1;
    }
    for (int i = 0; i < intervalsSize; i++) {
        int colSize = intervalsColSize[i];
        intervals[i] = (int*) malloc(sizeof(int) * colSize);
        for (int j = 0; j < colSize; j++) {
            intervals[i][j] = e1[i][j];
        }
    }

    newIntervalSize = 2;

    if ((newInterval = (int*) malloc(sizeof(int) * newIntervalSize)) == NULL) {
        perror("Cannot allocate memory for 'newInterval'");
        return 1;
    }
    newInterval[0] = 2;
    newInterval[1] = 5;

    ret = insert(intervals, intervalsSize, intervalsColSize, newInterval, newIntervalSize, &returnSize, &returnColumnSizes);
    print2dIntArray(ret, returnSize, returnColumnSizes);

    for (int i = 0; i < intervalsSize; i++) {
        free(intervals[i]);
    }
    free(intervals);
    intervals = NULL;

    free(intervalsColSize);

    free(newInterval);

    for (int i = 0; i < returnSize; i++) {
        free(ret[i]);
    }
    free(ret);
    ret = NULL;

    free(returnColumnSizes);

    /*
     *Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
     * Output: [[1,2],[3,10],[12,16]]
     * Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
     */
    int e2[][2] = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};

    intervalsSize = 5;

    if ((intervalsColSize = (int*) malloc(sizeof(int) * intervalsSize)) == NULL) {
        perror("Cannot allocate memory for 'intervalsColSize'");
        return 1;
    }
    for (int i = 0; i < intervalsSize; i++) {
        intervalsColSize[i] = 2;
    }

    if ((intervals = (int**) malloc(sizeof(int*) * intervalsSize)) == NULL) {
        perror("Cannot allocate memory for 'intervals'");
        return 1;
    }
    for (int i = 0; i < intervalsSize; i++) {
        int colSize = intervalsColSize[i];
        intervals[i] = (int*) malloc(sizeof(int) * colSize);
        for (int j = 0; j < colSize; j++) {
            intervals[i][j] = e2[i][j];
        }
    }

    newIntervalSize = 2;

    if ((newInterval = (int*) malloc(sizeof(int) * newIntervalSize)) == NULL) {
        perror("Cannot allocate memory for 'newInterval'");
        return 1;
    }
    newInterval[0] = 4;
    newInterval[1] = 8;

    ret = insert(intervals, intervalsSize, intervalsColSize, newInterval, newIntervalSize, &returnSize, &returnColumnSizes);
    print2dIntArray(ret, returnSize, returnColumnSizes);

    for (int i = 0; i < intervalsSize; i++) {
        free(intervals[i]);
    }
    free(intervals);
    intervals = NULL;

    free(intervalsColSize);

    free(newInterval);

    for (int i = 0; i < returnSize; i++) {
        free(ret[i]);
    }
    free(ret);
    ret = NULL;

    free(returnColumnSizes);

    return 0;
}
