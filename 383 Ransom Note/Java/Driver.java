public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: ransomNote = "a", magazine = "b"
         * Output: false
         */
        System.out.println(s.canConstruct("a", "b"));

        /*
         * Input: ransomNote = "aa", magazine = "ab"
         * Output: false
         */
        System.out.println(s.canConstruct("aa", "ab"));

        /*
         * Input: ransomNote = "aa", magazine = "aab"
         * Output: true
         */
        System.out.println(s.canConstruct("aa", "aab"));
    }
}
