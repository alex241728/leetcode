public class Solution {
    public int maxProfit(int[] prices) {
        int max = 0;
        int idx = 0;

        for (int i = 0; i < prices.length; i++) {
            int previous = prices[idx];
            int current = prices[i];

            if (current > previous) {
                max += (current - previous);
            }

            idx = i;
        }

        return max;
    }
}