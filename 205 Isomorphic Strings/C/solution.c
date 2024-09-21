#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_ASCII_LEN 256

bool isIsomorphic(char* s, char* t);

int main() {
    /*
        Input: s = "egg", t = "add"

        Output: true

        Explanation:
        The strings s and t can be made identical by:
        Mapping 'e' to 'a'.
        Mapping 'g' to 'd'.
    */
    printf("%d\n", isIsomorphic("egg", "add"));

    /*
        Input: s = "foo", t = "bar"

        Output: false

        Explanation:
        The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.
    */
    printf("%d\n", isIsomorphic("foo", "bar"));

    /*
        Input: s = "paper", t = "title"

        Output: true
    */
    printf("%d\n", isIsomorphic("paper", "title"));
}

bool isIsomorphic(char* s, char* t) {
    int len = strlen(s);

    char sToT[MAX_ASCII_LEN] = {'\0'};
    char tToS[MAX_ASCII_LEN] = {'\0'};

    for (int i = 0; i < len; i++) {
        char charS = s[i];
        char charT = t[i];

        if (sToT[charS] == '\0' && tToS[charT] == '\0') {
            sToT[charS] = charT;
            tToS[charT] = charS;
        }
        if (sToT[charS] != '\0' && sToT[charS] != charT) {
            return false;
        }
        if (tToS[charT] != '\0' && tToS[charT] != charS) {
            return false;
        }
    }

    return true;
}