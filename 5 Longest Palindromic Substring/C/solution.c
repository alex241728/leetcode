#include <stdlib.h>
#include <string.h>

#include "solution.h"

int expandAroundCenter(char* s, int left, int right);
int max(int a, int b);

char* longestPalindrome(char* s) {
    size_t len = strlen(s);

    if (len == 0) {
        return "";
    }

    int start = 0;
    int end = 0;

    for (int i = 0; i < len; i++) {
        int odd = expandAroundCenter(s, i, i);
        int even = expandAroundCenter(s, i, i + 1);
        int maxLen = max(odd, even);

        if (maxLen > (end - start)) {
            start = i - (maxLen - 1) / 2;
            end = i + maxLen / 2;
        }
    }

    int resultLen = end - start + 1;
    char* result = (char*) malloc(sizeof(char) * resultLen);
    strncpy(result, s + start, resultLen);
    result[resultLen] = '\0';
    return result;
}

int expandAroundCenter(char* s, int left, int right) {
    while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

int max(int a, int b) {
    return a >= b ? a : b;
}