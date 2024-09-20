#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int romanToInt(char* s);

int main() {
    char* s = NULL;
    
    /*
        Input: s = "III"
        Output: 3
        Explanation: III = 3.
    */
    s = "III";
    printf("%d\n", romanToInt(s));

    /*
        Input: s = "LVIII"
        Output: 58
        Explanation: L = 50, V= 5, III = 3.
    */
    s = "LVIII";
    printf("%d\n", romanToInt(s));

    /*
        Input: s = "MCMXCIV"
        Output: 1994
        Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
    */
    s = "MCMXCIV";
    printf("%d\n", romanToInt(s));
}

int romanToInt(char* s) {
    int res = 0;

    if (strstr(s, "IV") != NULL || strstr(s, "IX") != NULL) {
        res -= 2;
    }
    if (strstr(s, "XL") != NULL || strstr(s, "XC") != NULL) {
        res -= 20;
    }
    if (strstr(s, "CD") != NULL || strstr(s, "CM") != NULL) {
        res -= 200;
    }

    for (int i = 0; i < strlen(s); i++) {
        switch (s[i]) {
            case 'I':
                res += 1;
                break;
            case 'V':
                res += 5;
                break;
            case 'X':
                res += 10;
                break;
            case 'L':
                res += 50;
                break;
            case 'C':
                res += 100;
                break;
            case 'D':
                res += 500;
                break;
            case 'M':
                res += 1000;
        }
    }

    return res;
}