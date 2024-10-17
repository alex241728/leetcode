int maxProfit(int* prices, int pricesSize) {
    int max = 0;
    int idx = 0;

    for (int i = 0; i < pricesSize; i++) {
        int previous = prices[idx];
        int current = prices[i];
        
        if (current > previous) {
            max += (current - previous);
        }

        idx = i;
    }

    return max;
}