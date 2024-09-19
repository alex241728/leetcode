class Solution {
    public String intToRoman(int num) {
        int[] integers = new int[]{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String[] symbols = new String[]{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < integers.length; i++) {
            if (num == 0) {
                return sb.toString();
            }
            int integer = integers[i];
            int n = num / integer;
            for (int j = 0; j < n; j++) {
                sb.append(symbols[i]);
            }
            num %= integer;
        }

        return sb.toString();
    }
}
