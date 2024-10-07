#include <stdio.h>
#include <stdlib.h>

#include "solution.h"

int main(void) {
    int pointsSize = 0;
    int* pointsColSize = NULL;
    int** points = NULL;

    /*
     * Input: points = [[1,1],[2,2],[3,3]]
     * Output: 3
     */
    int example1[][2] = {{1, 1}, {2, 2}, {3, 3}};

    pointsSize = 3;

    if ((pointsColSize = (int*) malloc(sizeof(int) * pointsSize)) == NULL) {
        perror("Cannot allocate memory for 'pointsColSize'");
        return 1;
    }
    for (int i = 0; i < pointsSize; i++) {
        pointsColSize[i] = 2;
    }

    if ((points = (int**) malloc(sizeof(int*) * pointsSize)) == NULL) {
        perror("Cannot allocate memory for 'points'");
        return 1;
    }
    for (int i = 0; i < pointsSize; i++) {
        int colSize = pointsColSize[i];
        if ((points[i] = (int*) malloc(sizeof(int) * colSize)) == NULL) {
            perror("Cannot allocate memory for 'points[i]'");
            return 1;
        }
        for (int j = 0; j < colSize; j++) {
            points[i][j] = example1[i][j];
        }
    }

    printf("%d\n", maxPoints(points, pointsSize, pointsColSize));

    for (int i = 0; i < pointsSize; i++) {
        free(points[i]);
    }
    free(points);
    points = NULL;

    free(pointsColSize);
    pointsColSize = NULL;


    /*
     * Input: points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
     * Output: 4
     */

    int example2[][2] = {{1, 1}, {3, 2}, {5, 3}, {4, 1}, {2, 3}, {1, 4}};

    pointsSize = 6;

    if ((pointsColSize = (int*) malloc(sizeof(int) * pointsSize)) == NULL) {
        perror("Cannot allocate memory for 'pointsColSize'");
        return 1;
    }
    for (int i = 0; i < pointsSize; i++) {
        pointsColSize[i] = 2;
    }

    if ((points = (int**) malloc(sizeof(int*) * pointsSize)) == NULL) {
        perror("Cannot allocate memory for 'points'");
        return 1;
    }
    for (int i = 0; i < pointsSize; i++) {
        int colSize = pointsColSize[i];
        if ((points[i] = (int*) malloc(sizeof(int) * colSize)) == NULL) {
            perror("Cannot allocate memory for 'points[i]'");
            return 1;
        }
        for (int j = 0; j < colSize; j++) {
            points[i][j] = example2[i][j];
        }
    }

    printf("%d\n", maxPoints(points, pointsSize, pointsColSize));

    for (int i = 0; i < pointsSize; i++) {
        free(points[i]);
    }
    free(points);
    points = NULL;

    free(pointsColSize);
    pointsColSize = NULL;

    return 0;
}
