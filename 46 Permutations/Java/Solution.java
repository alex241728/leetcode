import java.util.ArrayList;
import java.util.List;

public class Solution {
    private static void backtrack(int[] nums, List<List<Integer>> permutations, List<Integer> permutation) {
        if (permutation.size() == nums.length) {
            permutations.add(new ArrayList<>(permutation));
            return;
        }

        for (int num : nums) {
            if (!permutation.contains(num)) {
                permutation.add(0, num);
                backtrack(nums, permutations, permutation);
                permutation.remove(0);
            }
        }
    }

    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> permutations = new ArrayList<>();
        backtrack(nums, permutations, new ArrayList<>());
        return permutations;
    }
}
