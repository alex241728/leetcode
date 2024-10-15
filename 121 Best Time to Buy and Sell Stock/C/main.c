#include <stdlib.h>
#include <stdio.h>

#include "solution.h"

int main() {
    int* prices = NULL;
    int pricesSize = 0;

    /*
        Input: prices = [7,1,5,3,6,4]
        Output: 5
        Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
        Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
    */
    int e1[] = {7, 1, 5, 3, 6, 4};

    pricesSize = sizeof(e1) / sizeof(int);

    if ((prices = (int*) malloc(sizeof(e1))) == NULL) {
        perror("Cannot allocate memory for 'prices'.");
        return 1;
    }
    for (int i = 0; i < pricesSize; i++) {
        prices[i] = e1[i];
    }

    printf("%d\n", maxProfit(prices, pricesSize));

    free(prices);
    prices = NULL;

    /*
        Input: prices = [7,6,4,3,1]
        Output: 0
        Explanation: In this case, no transactions are done and the max profit = 0.
    */
    int e2[] = {7, 6, 4, 3, 1};

    pricesSize = sizeof(e2) / sizeof(int);

    if ((prices = (int*) malloc(sizeof(e2))) == NULL) {
        perror("Cannot allocate memory for 'prices'.");
        return 1;
    }
    for (int i = 0; i < pricesSize; i++) {
        prices[i] = e2[i];
    }

    printf("%d\n", maxProfit(prices, pricesSize));

    free(prices);
    prices = NULL;
    
    return 0;
}