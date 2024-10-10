#include <stdio.h>
#include <stdlib.h>

#include "solution.h"
#include "array.h"

int main(void) {
    int* nums1 = NULL;
    int nums1Size = 0;
    int m = 0;
    int* nums2 = NULL;
    int nums2Size = 0;
    int n = 0;

    /*
     * Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
     * Output: [1,2,2,3,5,6]
     * Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
     * The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
     */
    int nums1e1[] = {1, 2, 3, 0, 0, 0};
    nums1Size = sizeof(nums1e1) / sizeof(int);
    if ((nums1 = (int*) malloc(sizeof(int) * nums1Size)) == NULL) {
        perror("Cannot allocate memory for 'nums1'");
        return 1;
    }
    for (int i = 0; i < nums1Size; i++) {
        nums1[i] = nums1e1[i];
    }
    m = 3;

    int nums2e1[] = {2, 5, 6};
    nums2Size = sizeof(nums2e1) / sizeof(int);
    if ((nums2 = (int*) malloc(sizeof(int) * nums2Size)) == NULL) {
        perror("Cannot allocate memory for 'nums2'");
        return 1;
    }
    for (int i = 0; i < nums2Size; i++) {
        nums2[i] = nums2e1[i];
    }
    n = 3;

    merge(nums1, nums1Size, m, nums2, nums2Size, n);
    printIntArray(nums1, nums1Size);

    free(nums1);
    nums1 = NULL;
    free(nums2);
    nums2 = NULL;

    /*
     * Input: nums1 = [1], m = 1, nums2 = [], n = 0
     * Output: [1]
     * Explanation: The arrays we are merging are [1] and [].
     * The result of the merge is [1].
     */
    int nums1e2[] = {1};
    nums1Size = sizeof(nums1e2) / sizeof(int);
    if ((nums1 = (int*) malloc(sizeof(int) * nums1Size)) == NULL) {
        perror("Cannot allocate memory for 'nums1'");
        return 1;
    }
    for (int i = 0; i < nums1Size; i++) {
        nums1[i] = nums1e2[i];
    }
    m = 1;

    n = 0;

    merge(nums1, nums1Size, m, nums2, nums2Size, n);
    printIntArray(nums1, nums1Size);

    free(nums1);
    nums1 = NULL;

    /*
     * Input: nums1 = [0], m = 0, nums2 = [1], n = 1
     * Output: [1]
     * Explanation: The arrays we are merging are [] and [1].
     * The result of the merge is [1].
     * Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
     */
    int nums1e3[] = {0};
    nums1Size = sizeof(nums1e3) / sizeof(int);
    if ((nums1 = (int*) malloc(sizeof(int) * nums1Size)) == NULL) {
        perror("Cannot allocate memory for 'nums1'");
        return 1;
    }
    for (int i = 0; i < nums1Size; i++) {
        nums1[i] = nums1e3[i];
    }
    m = 0;

    int nums2e3[] = {1};
    nums2Size = sizeof(nums2e3) / sizeof(int);
    if ((nums2 = (int*) malloc(sizeof(int) * nums2Size)) == NULL) {
        perror("Cannot allocate memory for 'nums2'");
        return 1;
    }
    for (int i = 0; i < nums2Size; i++) {
        nums2[i] = nums2e3[i];
    }
    n = 1;

    merge(nums1, nums1Size, m, nums2, nums2Size, n);
    printIntArray(nums1, nums1Size);

    free(nums1);
    nums1 = NULL;
    free(nums2);
    nums2 = NULL;

    return 0;
}
