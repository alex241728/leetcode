import java.util.Arrays;

public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        int[] nums1 = null;
        /*
            Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
            Output: [1,2,2,3,5,6]
            Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
            The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
         */
        nums1 = new int[]{1, 2, 3, 0, 0, 0};
        s.merge(nums1, 3, new int[]{2, 5, 6}, 3);
        System.out.println(Arrays.toString(nums1));

        /*
            Input: nums1 = [1], m = 1, nums2 = [], n = 0
            Output: [1]
            Explanation: The arrays we are merging are [1] and [].
            The result of the merge is [1].
         */
        nums1 = new int[]{1};
        s.merge(nums1, 1, new int[]{}, 0);
        System.out.println(Arrays.toString(nums1));

        /*
            Input: nums1 = [0], m = 0, nums2 = [1], n = 1
            Output: [1]
            Explanation: The arrays we are merging are [] and [1].
            The result of the merge is [1].
            Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
         */
        nums1 = new int[]{0};
        s.merge(nums1, 0, new int[]{1}, 1);
        System.out.println(Arrays.toString(nums1));
    }
}
