public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: nums = [100,4,200,1,3,2]
         * Output: 4
         * Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. 
         *              Therefore its length is 4.
         */
        System.out.println(s.longestConsecutive(new int[]{100,4,200,1,3,2}));

        /*
         * Input: nums = [0,3,7,2,5,8,4,6,0,1]
         * Output: 9
         */
        System.out.println(s.longestConsecutive(new int[]{0,3,7,2,5,8,4,6,0,1}));
    }
}