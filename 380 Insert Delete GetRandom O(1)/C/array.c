#include <stdio.h>

void printIntArray(int* a, int size) {
    if (size == 0) {
        printf("[]");
    }
    printf("[");
    int i = 0;
    while (i < size - 1) {
        printf("%d, ", a[i]);
        i++;
    }
    printf("%d]\n", a[i]);
}