#include "solution.h"

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int mergedSize = nums1Size + nums2Size;
    int merged[mergedSize];

    int j = 0;
    for (int i = 0; i < nums1Size; i++) {
        merged[j++] = nums1[i]; 
    }
    for (int i = 0; i < nums2Size; i++) {
        merged[j++] = nums2[i];
    }

    qsort(merged, mergedSize, sizeof(int), compare);

    if (mergedSize % 2 == 1) {
        int index = mergedSize / 2;
        return merged[index];
    }
    
    int index1 = mergedSize / 2 - 1;
    int index2 = mergedSize / 2;
    return (double) (merged[index1] + merged[index2]) / 2;
}

int compare(const void* element1, const void* element2) {
    int num1 = *((int*)element1);
    int num2 = *((int*)element2);

    if (num1 > num2) {
        return  1;
    }
    if (num1 < num2) {
        return -1;
    }
    return 0;
}