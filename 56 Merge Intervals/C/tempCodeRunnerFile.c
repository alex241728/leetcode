#include <stdlib.h>

#include "solution.h"
#include "array.h"

int main() {
    int** intervals = NULL;
    int intervalsSize = 0;
    int* intervalsColSize = NULL;
    int** ret = NULL;
    int retSize = 0;
    int* retColumnSizes = NULL;
    
    /*
        Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
        Output: [[1,6],[8,10],[15,18]]
        Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
    */
    intervalsSize = 4;

    intervalsColSize = (int*) malloc(sizeof(int) * intervalsSize);
    for (int i = 0; i < intervalsSize; i++) {
        intervalsColSize[i] = 2;
    }

    int intervalArray[][2] = {{1,3},{2,6},{8,10},{15,18}};
    intervals = malloc(sizeof(int*) * intervalsSize);
    for (int i = 0; i < intervalsSize; i++) {
        int colSize = intervalsColSize[i];
        intervals[i] = malloc(sizeof(int) * colSize);
        for (int j = 0; j < colSize; j++) {
            intervals[i][j] = intervalArray[i][j];
        }
    }

    ret = merge(intervals, intervalsSize, intervalsColSize, &retSize, &retColumnSizes);
    print2dIntArray(ret, retSize, retColumnSizes);

    for (int i = 0; i < intervalsSize; i++) {
        free(intervals[i]);
    }
    free(intervals);
    intervals = NULL;

    free(intervalsColSize);
    intervalsColSize = NULL;

    for (int i = 0; i < retSize; i++) {
        free(ret[i]);
    }
    free(ret);
    ret = NULL;

    free(retColumnSizes);
    retColumnSizes = NULL;

    return 0;
}