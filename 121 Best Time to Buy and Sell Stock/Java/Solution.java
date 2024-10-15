public class Solution {
    public int maxProfit(int[] prices) {
        int max = 0;
        int idx = 0;
        for (int i = 0; i < prices.length; i++) {
            int smallestPrice = prices[idx];
            int currentPrice = prices[i];
            if (currentPrice < smallestPrice) {
                idx = i;
            }
            else {
                max = Math.max(max, currentPrice - smallestPrice);
            }
        }
        return max;
    }
}