#include "solution.h"
#include "math.h"

bool canJump(int* nums, int numsSize) {
    int m = 0;
    int i = 0;
    while (i < numsSize - 1) {
        if (m == i && nums[i] == 0) {
            return false;
        }
        m = max(m, i + nums[i]);
        i++;
    }
    return m >= i;
}