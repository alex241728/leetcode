public class Solution {
    public double myPow(double x, int n) {
        return pow(x, (long) n);
    }

    public static double pow(double x, long n) {
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            return 1 / pow(x, -n);
        }
        
        if (n % 2 == 1) {
            return x * pow(x * x, n / 2);
        }
        return pow(x * x, n / 2);
    }
}
