#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

double myPow(double x, int n);
double power(double x, long n);

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
    return power(x, (long) n);
}

double power(double x, long n) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 1 / power(x, -n);
    }

    if (n % 2) {
        return x * power(x * x, n / 2);
    }
    return power(x * x, n / 2);
}