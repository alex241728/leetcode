#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);
int compare(const void* element1, const void* element2);

int main() {
    int* nums1 = NULL;
    int* nums2 = NULL;

    /*
        Input: nums1 = [1,3], nums2 = [2]
        Output: 2.00000
        Explanation: merged array = [1,2,3] and median is 2.
    */
    nums1 = (int*) malloc(sizeof(int) * 2);
    nums1[0] = 1;
    nums1[1] = 3;
    nums2 = (int*) malloc(sizeof(int));
    nums2[0] = 2;
    printf("%.2f\n", findMedianSortedArrays(nums1, 2, nums2, 1));
    free(nums1);
    free(nums2);

    /*
        Input: nums1 = [1,2], nums2 = [3,4]
        Output: 2.50000
        Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
    */
    nums1 = (int*) malloc(sizeof(int) * 2);
    nums1[0] = 1;
    nums1[1] = 2;
    nums2 = (int*) malloc(sizeof(int) * 2);
    nums2[0] = 3;
    nums2[1] = 4;
    printf("%.2f\n", findMedianSortedArrays(nums1, 2, nums2, 2));
    free(nums1);
    free(nums2);

    return 0;
}

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