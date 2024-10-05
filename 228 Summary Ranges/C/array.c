#include <stdio.h>

void printStringArray(char** strs, int size) {
    if (size == 0) {
        printf("[]");
        return;
    }

    printf("[");
    int i = 0;
    while (i < size - 1) {
        printf("%s, ", strs[i]);
        i++;
    }
    printf("%s]\n", strs[i]);
}