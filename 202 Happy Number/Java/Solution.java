import java.util.ArrayList;
import java.util.List;

public class Solution {
    private static int getProcessedNum(int n) {
        int num = 0;
        while (n != 0) {
            num += Math.pow(n % 10, 2);
            n /= 10;
        }
        return num;
    }
    
    public boolean isHappy(int n) {
        List<Integer> previous = new ArrayList<>();
        previous.add(n);

        while (true) {
            int num = getProcessedNum(n);
            
            if (num == 1) {
                return true;
            }
            if (previous.contains(num)) {
                return false;
            }

            n = num;
            previous.add(n);
        }
    }
}
