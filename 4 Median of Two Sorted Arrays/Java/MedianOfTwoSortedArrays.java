import java.util.Arrays;

public class MedianOfTwoSortedArrays {
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int len1 = nums1.length;
        int len2 = nums2.length;
        int lenMerged = len1 + len2;

        int[] merged = new int[lenMerged];
        int j = 0;
        for (int e : nums1) {
            merged[j++] = e;
        }
        for (int e : nums2) {
            merged[j++] = e;
        }
        Arrays.sort(merged);

        if (lenMerged % 2 == 1) {
            return merged[lenMerged / 2];
        }

        int m1 = merged[lenMerged / 2];
        int m2 = merged[lenMerged / 2 - 1];
        return ((double) m1 + m2) / 2;
    }
}
