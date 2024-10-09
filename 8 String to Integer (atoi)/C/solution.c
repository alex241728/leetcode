//
// Created by Alex Yang on 2024-10-09.
//

#include <limits.h>
#include <string.h>

#include "solution.h"

int myAtoi(char* s) {
    size_t len = strlen(s);
    int i = 0;
    int res = 0;

    while (i < len && s[i] == ' ') {
        i++;
    }
    if (i >= len) {
        return res;
    }

    int multiplier = 1;
    if (s[i] == '-') {
        multiplier = -1;
        i++;
    }
    else if (s[i] == '+') {
        i++;
    }
    if (i >= len) {
        return res;
    }

    while (i < len && s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';
        if (res > (INT_MAX - digit) / 10) {
            return multiplier > 0 ? INT_MAX : INT_MIN;
        }

        res = res * 10 + digit;
        i++;
    }

    return res * multiplier;
}
