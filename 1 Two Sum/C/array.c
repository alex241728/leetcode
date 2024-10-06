#include <stdio.h>

void printArray(int* a, int size) {
    printf("%s", "[");
    int i = 0;
    while (i < size - 1) {
        printf("%d, ", a[i]);
        i++;
    }
    printf("%d]\n", a[i]);
}