#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* intToRoman(int num);
char* concat(const char* s1, const char* s2);

int main() {
    /*
        Input: num = 3749

        Output: "MMMDCCXLIX"

        Explanation:
        3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
        700 = DCC as 500 (D) + 100 (C) + 100 (C)
        40 = XL as 10 (X) less of 50 (L)
        9 = IX as 1 (I) less of 10 (X)
        Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places
    */
    printf("%s\n", intToRoman(3749));

    /*
        Input: num = 58

        Output: "LVIII"

        Explanation:
        50 = L
        8 = VIII
    */
    printf("%s\n", intToRoman(58));

    /*
        Input: num = 1994

        Output: "MCMXCIV"

        Explanation:
        1000 = M
        900 = CM
        90 = XC
        4 = IV
    */
    printf("%s\n", intToRoman(1994));
}

char* intToRoman(int num) {
    int integers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    char* res = "";
    int size = sizeof(integers) / sizeof(int);
    for (int i = 0; i < size; i++) {
        if (num == 0) {
            return res;
        }
        int integer = integers[i];
        int n = num / integer;
        for (int j = 0; j < n; j++) {
            res = concat(res, symbols[i]);
        }
        num %= integer;
    }
    return res;
}

char* concat(const char* s1, const char* s2) {
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    char* res = NULL;
    res = (char*) malloc(sizeof(char) * (len1 + len2 + 1));
    if (res == NULL) {
        printf("Memory allocation failed.\n");
        return res;
    }

    strcpy(res, s1);
    strcat(res, s2);

    return res;
}