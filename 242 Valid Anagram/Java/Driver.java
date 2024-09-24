public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: s = "anagram", t = "nagaram"
         * Output: true
         */
        System.out.println(s.isAnagram("anagram", "nagaram"));

        /*
         * Input: s = "rat", t = "car"
         * Output: false
         */
        System.out.println(s.isAnagram("rat", "car"));
    }
}
