//
// Created by Alex Yang on 2024-10-10.
//

#include <stdio.h>

void printIntArray(int* a, int size) {
    printf("[");
    int i = 0;
    while (i < size - 1) {
        printf("%d, ", a[i]);
        i++;
    }
    printf("%d]\n", a[i]);
}