import java.util.Arrays;

public class Driver {
    public static void main(String[] args) {
        /*
         * Example 1:
         * Input: nums = [2,7,11,15], target = 9
         * Output: [0,1]
         * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
         */
        System.out.println(Arrays.toString(TwoSum.twoSum(new int[]{2,7,11,15}, 9)));

        /*
         * Example 2:
         * Input: nums = [3,2,4], target = 6
         * Output: [1,2]
         */
        System.out.println(Arrays.toString(TwoSum.twoSum(new int[]{3,2,4}, 6)));

        /*
         * Example 3:
         * Input: nums = [3,3], target = 6
         * Output: [0,1]
         */
        System.out.println(Arrays.toString(TwoSum.twoSum(new int[]{3,3}, 6)));
    }
}
