public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: strs = ["eat","tea","tan","ate","nat","bat"]
         * 
         * Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
         * 
         * Explanation:
         * There is no string in strs that can be rearranged to form "bat".
         * The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
         * The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
         */
        System.out.println(s.groupAnagrams(new String[]{"eat","tea","tan","ate","nat","bat"}));

        /*
         * Input: strs = [""]
         * 
         * Output: [[""]]
         */
        System.out.println(s.groupAnagrams(new String[]{""}));

        /*
         * Input: strs = ["a"]
         * 
         * Output: [["a"]]
         */
        System.out.println(s.groupAnagrams(new String[]{"a"}));
    }
}
