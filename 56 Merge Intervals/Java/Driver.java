import java.util.Arrays;

public class Driver {
    public static String toString(int[][] arr) {
        if (arr == null) {
            return "[]";
        }

        StringBuilder sb = new StringBuilder();
        sb.append("[");
        for (int[] a : arr) {
            sb.append(Arrays.toString(a));
        }
        sb.append("]");

        return sb.toString();
    }
    
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
         * Output: [[1,6],[8,10],[15,18]]
         * Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
         */
        System.out.println(toString(s.merge(new int[][]{{1,3},{2,6},{8,10},{15,18}})));

        /*
         * Input: intervals = [[1,4],[4,5]]
         * Output: [[1,5]]
         * Explanation: Intervals [1,4] and [4,5] are considered overlapping.
         */
        System.out.println(toString(s.merge(new int[][]{{1,4},{4,5}})));
    }
}