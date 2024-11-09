#include <stdlib.h>
#include <string.h>

#include "solution.h"

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* result = NULL;

    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            result = (int*) malloc(sizeof(int) * *returnSize);
            result = memcpy(result, digits, sizeof(int) * *returnSize);
            return result;
        }
        digits[i] = 0;
    }
    
    *returnSize = digitsSize + 1;
    result = (int*) malloc(sizeof(int) * *returnSize);
    memset(result, 0, sizeof(int) * (*returnSize));
    result[0] = 1;
    return result;
}