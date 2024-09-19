import java.util.HashMap;

public class TwoSum {
    public static int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            int comp = target - num;

            if (map.containsKey(comp)) {
                return new int[]{map.get(comp), i};
            }

            map.put(num, i);
        }

        return new int[]{-1, -1};
    }
}