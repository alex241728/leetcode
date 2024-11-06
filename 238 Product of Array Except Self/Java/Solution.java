import java.util.Arrays;

public  class Solution {
    public int[] productExceptSelf(int[] nums) {
        int len = nums.length;

        int[] result = new int[len];
        Arrays.fill(result, 1);

        int i = 0;
        int multiple = 1;
        for (int j = 1; j < len; j++) {
            multiple *= nums[i];
            result[j] *= multiple;
            i++;
        }

        i = len - 1;
        multiple = 1;
        for (int j = len - 2; j >= 0; j--) {
            multiple *= nums[i];
            result[j] *= multiple;
            i--;
        }

        return result;
    }
}