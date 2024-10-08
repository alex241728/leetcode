#include <limits.h>

#include "solution.h"

int reverse(int x) {
    int res = 0;

    while (x != 0) {
        int digit = x % 10;
        if (x > 0 && res > (INT_MAX - digit) / 10) {
            return 0;
        }
        if (x < 0 && res < (INT_MIN - digit) / 10) {
            return 0;
        }
        res = res * 10 + x % 10;
        x /= 10;
    }

    return res;
}