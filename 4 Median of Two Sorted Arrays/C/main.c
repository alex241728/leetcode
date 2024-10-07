#include <stdlib.h>
#include <stdio.h>

#include "solution.h"

int main() {
    int* nums1 = NULL;
    int nums1Size = 0;
    int* nums2 = NULL;
    int nums2Size = 0;

    /*
        Input: nums1 = [1,3], nums2 = [2]
        Output: 2.00000
        Explanation: merged array = [1,2,3] and median is 2.
    */
    int nums1e1[] = {1, 3};
    int nums2e1[] = {2};

    nums1Size = 2;
    nums2Size = 1;

    nums1 = (int*) malloc(sizeof(int) * nums1Size);
    for (int i = 0; i < nums1Size; i++) {
        nums1[i] = nums1e1[i];
    }

    nums2 = (int*) malloc(sizeof(int) * nums2Size);
    for (int i = 0; i < nums2Size; i++) {
        nums1[i] = nums2e1[i];
    }

    printf("%.2f\n", findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size));

    free(nums1);
    nums1 = NULL;

    free(nums2);
    nums2 = NULL;


    /*
        Input: nums1 = [1,2], nums2 = [3,4]
        Output: 2.50000
        Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
    */
    int nums1e2[] = {1, 2};
    int nums2e2[] = {3, 4};

    nums1Size = 2;
    nums2Size = 2;

    nums1 = (int*) malloc(sizeof(int) * nums1Size);
    for (int i = 0; i < nums1Size; i++) {
        nums1[i] = nums1e2[i];
    }

    nums2 = (int*) malloc(sizeof(int) * nums2Size);
    for (int i = 0; i < nums1Size; i++) {
        nums1[i] = nums2e2[i];
    }

    printf("%.2f\n", findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size));

    free(nums1);
    nums1 = NULL;

    free(nums2);
    nums2 = NULL;


    return 0;
}