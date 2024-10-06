import java.util.ArrayList;
import java.util.List;

public class Solution {
    private static void backtrack(int n, int k, int index, List<List<Integer>>combinations, List<Integer> combination) {
        if (combination.size() == k) {
            combinations.add(new ArrayList<>(combination));
            return;
        }

        for (int i = index; i <= n; i++) {
            combination.add(0, i);
            backtrack(n, k, i + 1, combinations, combination);
            combination.remove(0);
        }
    }
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> combinations = new ArrayList<>();
        backtrack(n, k, 1, combinations, new ArrayList<>());
        return combinations;
    }
}