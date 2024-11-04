public class Solution {
    public String convert(String s, int numRows) {
        int len = s.length();

        if (numRows == 1 || len <= numRows) {
            return s;
        }

        StringBuilder sb = new StringBuilder();
        
        int max = 2 * (numRows - 1);
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < len; j += max) {
                sb.append(s.charAt(j));
                
                if (i != 0 && i != numRows - 1) {
                    int secondIdx = j + max - 2 * i;
                    if (secondIdx < len) {
                        sb.append(s.charAt(secondIdx));
                    }
                }
            }
        }

        return sb.toString();
    }
}