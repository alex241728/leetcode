public class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int left1 = m - 1;
        int right1 = nums1.length - 1;
        int right2 = n - 1;

        while (right2 >= 0) {
            if (left1 < 0  || nums2[right2] >= nums1[left1]) {
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
}
