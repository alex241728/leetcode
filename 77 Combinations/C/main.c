#include <stdlib.h>

#include "solution.h"
#include "array.h"

int main(void) {
    int** ret = NULL;
    int returnSize = 0;
    int* returnColumnSizes = NULL;

    /*
        Input: n = 4, k = 2
        Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
        Explanation: There are 4 choose 2 = 6 total combinations.
        Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.
    */
    ret = combine(4, 2, &returnSize, &returnColumnSizes);
    print(ret, returnSize, returnColumnSizes);
    free(returnColumnSizes);
    returnColumnSizes = NULL;
    for (int i = 0; i < returnSize; i++) {
        free(ret[i]);
    }
    free(ret);
    ret = NULL;

    /*
        Input: n = 1, k = 1
        Output: [[1]]
        Explanation: There is 1 choose 1 = 1 total combination.
    */
    ret = combine(1, 1, &returnSize, &returnColumnSizes);
    print(ret, returnSize, returnColumnSizes);
    free(returnColumnSizes);
    returnColumnSizes = NULL;
    for (int i = 0; i < returnSize; i++) {
        free(ret[i]);
    }
    free(ret);
    ret = NULL;

    return 0;
}
