#include <stdio.h>
#include <stdlib.h>

#include "solution.h"

int main() {
    char* s = NULL;
    char* result = NULL;

    /*
        Input: s = "babad"
        Output: "bab"
        Explanation: "aba" is also a valid answer.
    */
    s = "babad";
    result = longestPalindrome(s);
    printf("%s\n", result);
    free(result);

    /*
        Input: s = "cbbd"
        Output: "bb"
    */
    s = "cbbd";
    result = longestPalindrome(s);
    printf("%s\n", result);
    free(result);

    return 0;
}