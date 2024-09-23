#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_ASCII_LEN 256

bool wordPattern(char* pattern, char* s);

int main() {
    /*
        Input: pattern = "abba", s = "dog cat cat dog"

        Output: true

        Explanation:
        The bijection can be established as:
            'a' maps to "dog".
            'b' maps to "cat".
    */
    printf("%d\n", wordPattern("abba", "dog cat cat dog"));

    /*
        Input: pattern = "abba", s = "dog cat cat fish"

        Output: false
    */
    printf("%d\n", wordPattern("abba", "dog cat cat fish"));

    /*
        Input: pattern = "aaaa", s = "dog cat cat dog"

        Output: false
    */
    printf("%d\n", wordPattern("aaaa", "dog cat cat dog"));

    return 0;
}

bool wordPattern(char* pattern, char* s) {
    // int len = strlen(pattern);
    // char* words[strlen(s)];
    // int num = 0;

    // char* token = strtok(s, " ");
    // while (token != NULL) {
    //     words[num++] = token;
    //     token = strtok(NULL, " ");
    // }

    // if (num != len) {
    //     return false;
    // }

    // char* pToS[MAX_ASCII_LEN] = {NULL};

    // for (int i = 0; i < len; i++) {
    //     char c = pattern[i];
    //     char* word = words[i];
    // }
}