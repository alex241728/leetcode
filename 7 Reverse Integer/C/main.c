#include <stdio.h>

#include "solution.h"

int main() {
    /*
        Input: x = 123
        Output: 321
    */
    printf("%d\n", reverse(123));

    /*
        Input: x = -123
        Output: -321
    */
    printf("%d\n", reverse(-123));

    /*
        Input: x = 120
        Output: 21
    */
    printf("%d\n", reverse(120));

    return 0;
}