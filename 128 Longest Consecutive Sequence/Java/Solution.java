import java.util.Arrays;

public class Solution {
    public int longestConsecutive(int[] nums) {
        int len = nums.length;

        if (len == 0) {
            return 0;
        }

        Arrays.sort(nums);
        int maxLen = 1;
        int consecutiveLen = 1;
        for (int i = 1; i < len; i++) {
            if (nums[i] == nums[i-1] + 1) {
                consecutiveLen++;
            }
            else if (nums[i] == nums[i-1]) {
                continue;
            }
            else {
                if (consecutiveLen > maxLen) {
                    maxLen = consecutiveLen;
                }
                consecutiveLen = 1;
            }
        }

        if (consecutiveLen > maxLen) {
            maxLen = consecutiveLen;
        }

        return maxLen;
    }
}
