public class Solution {
    public boolean canJump(int[] nums) {
        int max = 0;
        int i = 0;
        while (i < nums.length - 1) {
            if (max == i && nums[i] == 0) {
                return false;
            }
            max = Math.max(max, i + nums[i]);
            i++;
        }
        return max >= i;
    }
}