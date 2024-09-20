public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();
        /*
         * Input: s = "III"
         * Output: 3
         * Explanation: III = 3.
         */
        System.out.println(s.romanToInt("III"));

        /*
         * Input: s = "LVIII"
         * Output: 58
         * Explanation: L = 50, V= 5, III = 3.
         */
        System.out.println(s.romanToInt("LVIII"));

        /*
         * Input: s = "MCMXCIV"
         * Output: 1994
         * Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
         */
        System.out.println(s.romanToInt("MCMXCIV"));
    }
}
