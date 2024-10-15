#include "math.h"

int maxProfit(int* prices, int pricesSize) {
    int m = 0;
    int idx = 0;
    for (int i = 0; i < pricesSize; i++) {
        int smallestPrice = prices[idx];
        int currentPrice = prices[i];
        if (currentPrice < smallestPrice) {
            idx = i;
        }
        else {
            m = max(m, currentPrice - smallestPrice);
        }
    }
    return m;
}

