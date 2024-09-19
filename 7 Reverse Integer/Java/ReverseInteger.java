public class ReverseInteger {
    public int reverse(int x) {
        int res = 0;

        while (x != 0) {
            int digit = x % 10;
            if (x > 0 && res > (Integer.MAX_VALUE - digit) / 10) {
                return 0;
            }
            if (x < 0 && res < (Integer.MIN_VALUE - digit) / 10) {
                return 0;
            }
            
            res = res * 10 + digit;
            x /= 10;
        }

        return res;
    }
}
