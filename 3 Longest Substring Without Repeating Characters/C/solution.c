#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "solution.h"

#define MAX_ASCII_LEN 256

int lengthOfLongestSubstring(char* s) {
    int maxLen = 0;
    int startIdx = 0;

    int pastChars[MAX_ASCII_LEN];
    for (int i = 0; i < MAX_ASCII_LEN; i++) {
        pastChars[i] = -1;
    }

    for (int endIdx = 0; endIdx < strlen(s); endIdx++) {
        int cIdx = (int) s[endIdx];

        if (pastChars[cIdx] >= startIdx) {
            startIdx = pastChars[cIdx] + 1;
        }
        
        pastChars[cIdx] = endIdx;
        maxLen = max(maxLen, endIdx - startIdx + 1);
    }

    return maxLen;
}

int max(int a, int b) {
    return a >= b ? a : b;
}