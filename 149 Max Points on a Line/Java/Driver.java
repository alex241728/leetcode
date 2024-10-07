public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: points = [[1,1],[2,2],[3,3]]
         * Output: 3
         */
        System.out.println(s.maxPoints(new int[][]{{1,1}, {2,2}, {3,3}}));
        
        /*
         * Input: points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
         * Output: 4
         */
        System.out.println(s.maxPoints(new int[][]{{1,1}, {3,2}, {5,3}, {4,1}, {2,3}, {1,4}}));
    }
}