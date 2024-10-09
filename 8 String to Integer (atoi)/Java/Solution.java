import static java.lang.Character.isDigit;

public class Solution {
    public int myAtoi(String s) {
        int len = s.length();
        int i = 0;
        int res = 0;

        while (i < len && s.charAt(i) == ' ') {
            i++;
        }
        if (i >= len) {
            return res;
        }

        int multiplier = 1;
        if (s.charAt(i) == '-') {
            multiplier = -1;
            i++;
        }
        else if (s.charAt(i) == '+') {
            i++;
        }
        if (i >= len) {
            return res;
        }

        while (i < len && isDigit(s.charAt(i))) {
            int digit = s.charAt(i) - '0';
            if (res > (Integer.MAX_VALUE - digit) / 10) {
                return multiplier > 0 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }

            res = res * 10 + digit;
            i++;
        }

        return res * multiplier;
    }
}
