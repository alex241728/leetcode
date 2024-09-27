public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: nums = [1,2,3,1], k = 3
         * Output: true
         */
        System.out.println(s.containsNearbyDuplicate(new int[]{1,2,3,1}, 3));
        
        /*
         * Input: nums = [1,0,1,1], k = 1
         * Output: true
         */
        System.out.println(s.containsNearbyDuplicate(new int[]{1,0,1,1}, 1));

        /*
         * Input: nums = [1,2,3,1,2,3], k = 2
         * Output: false
         */
        System.out.println(s.containsNearbyDuplicate(new int[]{1,2,3,1,2,3}, 2));
    }
}
