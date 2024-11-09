#include <stdlib.h>

#include "array.h"
#include "solution.h"

int main() {
    int* digits = NULL;
    int digitsSize = 0;
    int* result = NULL;
    int resultSize = 0;

    /*
        Input: digits = [1,2,3]
        Output: [1,2,4]
        Explanation: The array represents the integer 123.
        Incrementing by one gives 123 + 1 = 124.
        Thus, the result should be [1,2,4].
    */
    int e1[] = {1, 2, 3};
    
    digitsSize = sizeof(e1) / sizeof(int);

    digits = (int*) malloc(sizeof(int) * digitsSize);
    for (int i = 0; i < digitsSize; i++) {
        digits[i] = e1[i];
    }

    result = plusOne(digits, digitsSize, &resultSize);
    printIntArray(result, resultSize);

    free(digits);
    free(result);

    /*
        Input: digits = [4,3,2,1]
        Output: [4,3,2,2]
        Explanation: The array represents the integer 4321.
        Incrementing by one gives 4321 + 1 = 4322.
        Thus, the result should be [4,3,2,2].
    */
    int e2[] = {4, 3, 2, 1};

    digitsSize = sizeof(e2) / sizeof(int);

    digits = (int*) malloc(sizeof(int) * digitsSize);
    for (int i = 0; i < digitsSize; i++) {
        digits[i] = e2[i];
    }

    result = plusOne(digits, digitsSize, &resultSize);
    printIntArray(result, resultSize);

    free(digits);
    free(result);

    /*
        Input: digits = [9]
        Output: [1,0]
        Explanation: The array represents the integer 9.
        Incrementing by one gives 9 + 1 = 10.
        Thus, the result should be [1,0].
    */
    int e3[] = {9};

    digitsSize = sizeof(e3) / sizeof(int);

    digits = (int*) malloc(sizeof(int) * digitsSize);
    for (int i = 0; i < digitsSize; i++) {
        digits[i] = e3[i];
    }

    result = plusOne(digits, digitsSize, &resultSize);
    printIntArray(result, resultSize);

    free(digits);
    free(result);
    
    return 0;
}