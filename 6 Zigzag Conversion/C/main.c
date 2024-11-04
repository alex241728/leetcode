#include <stdio.h>
#include <stdlib.h>

#include "solution.h"

int main() {
    char* result = NULL;

    /*
        Input: s = "PAYPALISHIRING", numRows = 3
        Output: "PAHNAPLSIIGYIR"
    */
    result = convert("PAYPALISHIRING", 3);
    printf("%s\n", result);
    free(result);

    /*
        Input: s = "PAYPALISHIRING", numRows = 4
        Output: "PINALSIGYAHRPI"
    */
    result = convert("PAYPALISHIRING", 4);
    printf("%s\n", result);
    free(result);

    /*
        Input: s = "A", numRows = 1
        Output: "A"
    */
    result = convert("A", 1);
    printf("%s\n", result);

    return 0;
}