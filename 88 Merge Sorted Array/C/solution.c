//
// Created by Alex Yang on 2024-10-10.
//

#include "solution.h"

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int left1 = m - 1;
    int right1 = nums1Size - 1;
    int right2 = n - 1;

    while (right2 >= 0) {
        if (left1 < 0 || nums2[right2] >= nums1[left1]) {
            nums1[right1] = nums2[right2];
            right2--;
        }
        else {
            nums1[right1] = nums1[left1];
            left1--;
        }
        right1--;
    }
}