#include <stdio.h>
#include <stdlib.h>

#include "solution.h"

int main() {
    int* prices = NULL;
    int pricesSize = 0;

    /*
        Input: prices = [7,1,5,3,6,4]
        Output: 7
        Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
        Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
        Total profit is 4 + 3 = 7.
    */
    int e1[] = {7, 1, 5, 3, 6, 4};
    
    pricesSize = sizeof(e1) / sizeof(int);

    if ((prices = (int*) malloc(sizeof(int) * pricesSize)) == NULL) {
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
        Input: prices = [1,2,3,4,5]
        Output: 4
        Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
        Total profit is 4.
    */
    int e2[] = {1, 2, 3, 4, 5};

    pricesSize = sizeof(e2) / sizeof(int);

    if ((prices = (int*) malloc(sizeof(int) * pricesSize)) == NULL) {
        perror("Cannot allocate memory for 'prices'.");
        return 1;
    }
    for (int i = 0; i < pricesSize; i++) {
        prices[i] = e2[i];
    }

    printf("%d\n", maxProfit(prices, pricesSize));

    free(prices);
    prices = NULL;

    /*
        Input: prices = [7,6,4,3,1]
        Output: 0
        Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.
    */
    int e3[] = {7, 6, 4, 3, 1};

    pricesSize = sizeof(e3) / sizeof(int);

    if ((prices = (int*) malloc(sizeof(int) * pricesSize)) == NULL) {
        perror("Cannot allocate memory for 'prices'.");
        return 1;
    }
    for (int i = 0; i < pricesSize; i++) {
        prices[i] = e3[i];
    }

    printf("%d\n", maxProfit(prices, pricesSize));

    free(prices);
    prices = NULL;

    return 0;
}