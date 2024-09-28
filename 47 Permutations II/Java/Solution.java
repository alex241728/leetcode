import java.util.ArrayList;
import java.util.List;

public class Solution {
    private static void backtrack(int[] nums, List<List<Integer>> permutations, List<Integer> permutation, List<Integer> consumed) {
        if (permutation.size() == nums.length) {
            if (!permutations.contains(permutation)) {
                permutations.add(new ArrayList<>(permutation));
            }
            return;
        }
        
        for (int i = 0; i < nums.length; i++) {
            if (!consumed.contains(i)) {
                permutation.add(0, nums[i]);
                consumed.add(0, i);
                backtrack(nums, permutations, permutation, consumed);
                permutation.remove(0);
                consumed.remove(0);
            }
        }
    }

    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> permutations = new ArrayList<>();
        backtrack(nums, permutations, new ArrayList<>(), new ArrayList<>());
        return permutations;
    }
}
