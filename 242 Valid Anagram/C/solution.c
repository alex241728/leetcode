#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define LETTER_NUM 26

bool isAnagram(char* s, char* t);

int main() {
    /*
        Input: s = "anagram", t = "nagaram"
        Output: true
    */
    printf("%d\n", isAnagram("anagram", "nagaram"));
    
    /*
        Input: s = "rat", t = "car"
        Output: false
    */
    printf("%d\n", isAnagram("rat", "car"));
    
    return 0;
}

bool isAnagram(char* s, char* t) {
    int sLen = strlen(s);
    int tLen = strlen(t);

    if (sLen != tLen) {
        return false;
    }

    int map[LETTER_NUM] = {0};

    for (int i = 0;  i < sLen; i++) {
        int letterPos = s[i] - 'a';
        map[letterPos]++;
    }
    
    for (int i = 0; i < tLen; i++) {
        int letterPos = t[i] - 'a';
        if (map[letterPos] == 0) {
            return false;
        }
        map[letterPos]--;
    }

    return true;
}