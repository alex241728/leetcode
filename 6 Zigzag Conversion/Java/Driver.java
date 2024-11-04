public class Driver {
    public static void main(String[] args) {
        Solution s = new Solution();

        /*
         * Input: s = "PAYPALISHIRING", numRows = 3
         * Output: "PAHNAPLSIIGYIR"
         */
        System.out.println(s.convert("PAYPALISHIRING", 3));

        /*
         * Input: s = "PAYPALISHIRING", numRows = 4
         * Output: "PINALSIGYAHRPI"
         */
        System.out.println(s.convert("PAYPALISHIRING", 4));

        /*
         * Input: s = "A", numRows = 1
         * Output: "A"
         */
        System.out.println(s.convert("A", 1));
    }
}
