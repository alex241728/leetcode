import java.util.HashMap;
import java.util.Map;

public class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Map<Integer, Integer> numToIdx = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            if (numToIdx.containsKey(num) && (i - numToIdx.get(num)) <= k) {
                return true;
            }
            numToIdx.put(num, i);
        }

        return false;
    }
}