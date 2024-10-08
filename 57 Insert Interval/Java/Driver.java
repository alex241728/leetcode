import java.util.Arrays;

public class Driver {
    private static void print(int[][] nums) {
        System.out.print("[");
        int i = 0;
        while (i < nums.length - 1) {
            System.out.print(Arrays.toString(nums[i]) + ", ");
            i++;
        }
        System.out.println(Arrays.toString(nums[i]) + "]");
    }

    public static void main(String[] args) {
        Solution s = new Solution();

        /*
            Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
            Output: [[1,5],[6,9]]
            */
        print(s.insert(new int[][]{{1, 3}, {6, 9}}, new int[]{2, 5}));

        /*
            Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
            Output: [[1,2],[3,10],[12,16]]
            Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
            */
        print(s.insert(new int[][]{{1, 2}, {3, 5}, {6, 9}, {8, 10}, {12, 16}}, new int[]{4, 8}));
    }
}
