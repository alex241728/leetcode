public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: s = "abcabcbb"
         * Output: 3
         * Explanation: The answer is "abc", with the length of 3.
         */
        System.out.println(s.lengthOfLongestSubstring("abcabcbb"));

        /*
         * Input: s = "bbbbb"
         * Output: 1
         * Explanation: The answer is "b", with the length of 1.
         */
        System.out.println(s.lengthOfLongestSubstring("bbbbb"));

        /*
         * Input: s = "pwwkew"
         * Output: 3
         * Explanation: The answer is "wke", with the length of 3.
         * Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
         */
        System.out.println(s.lengthOfLongestSubstring("pwwkew"));
    }
}
