public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: pattern = "abba", s = "dog cat cat dog"
         * 
         * Output: true
         * 
         * Explanation:
         * The bijection can be established as:
         *      'a' maps to "dog".
         *      'b' maps to "cat".
         */
        System.out.println(s.wordPattern("abba", "dog cat cat dog"));

        /*
         * Input: pattern = "abba", s = "dog cat cat fish"
         * 
         * Output: false
         */
        System.out.println(s.wordPattern("abba", "dog cat cat fish"));

        /*
         * Input: pattern = "aaaa", s = "dog cat cat dog"
         * 
         * Output: false
         */
        System.out.println(s.wordPattern("aaaa", "dog cat cat dog"));
    }
}
