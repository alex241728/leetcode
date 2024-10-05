import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {
    public int[][] merge(int[][] intervals) {
        List<int[]> merged = new ArrayList<>();
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));

        int[] previous = intervals[0];
        for (int i = 1; i < intervals.length; i++) {
            int[] current = intervals[i];
            if (previous[1] >= current[0]) {
                previous[1] = Math.max(previous[1], current[1]);
            }
            else {
                merged.add(previous);
                previous = current;
            }
        }

        merged.add(previous);

        return merged.toArray(new int[merged.size()][]);
    }
}
