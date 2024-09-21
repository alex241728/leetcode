public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();
        
        /*
         * Input: s = "egg", t = "add"
         * 
         * Output: true
         * 
         * Explanation:
         * The strings s and t can be made identical by:
         * Mapping 'e' to 'a'.
         * Mapping 'g' to 'd'.
         */
        System.out.println(s.isIsomorphic("egg", "add"));

        /*
         * Input: s = "foo", t = "bar"
         * 
         * Output: false
         * 
         * Explanation:
         * The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.
         */
        System.out.println(s.isIsomorphic("foo", "bar"));

        /*
         * Input: s = "paper", t = "title"
         * 
         * Output: true
         */
        System.out.println(s.isIsomorphic("paper", "title"));
    }
}
