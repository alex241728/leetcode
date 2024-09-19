#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

double myPow(double x, int n);
double power(double* resP, double x, long n);

int main() {
    /*
        Input: x = 2.00000, n = 10
        Output: 1024.00000
    */
    printf("%f\n", myPow(2.00000, 10));

    /*
        Input: x = 2.10000, n = 3
        Output: 9.26100
    */
    printf("%f\n", myPow(2.10000, 3));

    /*
        Input: x = 2.00000, n = -2
        Output: 0.25000
        Explanation: 2-2 = 1/22 = 1/4 = 0.25
    */
    printf("%f\n", myPow(2.00000, -2));

    printf("%f\n", myPow(2.00000, -2147483648));

    return 0;
}

double myPow(double x, int n) {
    if (n == 0 || x == 1) {
        return 1;
    }
    double res = 1;
    if (n == INT_MIN) {
        power(&res, x, -(n+1));
        res *= x;
        return 1 / res;
    }
    long absN = n < 0 ? -n : n;
    power(&res, x, absN);
    return n < 0 ? 1 / res : res;
}

double power(double* resP, double x, long n) {
    if (n == 1) {
        *resP *= x;
        return x;
    }
    power(resP, x, n / 2);
    *resP = *resP * *resP;
    if (n % 2 == 1) {
        *resP *= x;
    }
    return *resP;
}