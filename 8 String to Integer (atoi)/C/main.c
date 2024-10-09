#include <stdio.h>

#include "solution.h"

int main(void) {
    printf("%d\n", myAtoi("42"));

    printf("%d\n", myAtoi(" -042"));

    printf("%d\n", myAtoi("1337c0d3"));

    printf("%d\n", myAtoi("0-1"));

    printf("%d\n", myAtoi("words and 987"));

    return 0;
}
