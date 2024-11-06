import java.util.Arrays;

public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        int[] nums = null;

        /*
         * Input: nums = [1,2,3,4]
         * Output: [24,12,8,6]
         */
        nums = new int[]{1, 2, 3, 4};
        System.out.println(Arrays.toString(s.productExceptSelf(nums)));

        /*
         * Input: nums = [-1,1,0,-3,3]
         * Output: [0,0,9,0,0]
         */
        nums = new int[]{-1, 1, 0, -3, 3};
        System.out.println(Arrays.toString(s.productExceptSelf(nums)));
    }
}
