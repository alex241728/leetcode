import java.util.ArrayList;
import java.util.List;

public class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> inserted = new ArrayList<>();
        int len = intervals.length;
        int i = 0;

        while (i < len && intervals[i][1] < newInterval[0]) {
            inserted.add(intervals[i]);
            i++;
        }

        while (i < len && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = Math.min(newInterval[0], intervals[i][0]);
            newInterval[1] = Math.max(newInterval[1], intervals[i][1]);
            i++;
        }
        inserted.add(newInterval);

        while (i < len) {
            inserted.add(intervals[i]);
            i++;
        }

        return inserted.toArray(new int[inserted.size()][]);
    }
}