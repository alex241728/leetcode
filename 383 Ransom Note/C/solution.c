#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ASCII_LEN 256

bool canConstruct(char* ransomNote, char* magazine);

int main() {
    /*
        Input: ransomNote = "a", magazine = "b"
        Output: false
    */
    printf("%d\n", canConstruct("a", "b"));

    /*
        Input: ransomNote = "aa", magazine = "ab"
        Output: false
    */
    printf("%d\n", canConstruct("aa", "ab"));

    /*
        Input: ransomNote = "aa", magazine = "aab"
        Output: true
    */
    printf("%d\n", canConstruct("aa", "aab"));

    return 0;
}

bool canConstruct(char* ransomNote, char* magazine) {
    int ransomNoteLen = strlen(ransomNote);
    int magLen = strlen(magazine);
    
    if (ransomNoteLen > magLen) {
        return false;
    }

    int charToNum[MAX_ASCII_LEN] = {0};
    for (int i = 0; i < magLen; i++) {
        charToNum[magazine[i]] += 1;
    }

    for (int i = 0; i < ransomNoteLen; i++) {
        if (charToNum[ransomNote[i]] == 0) {
            return false;
        }
        charToNum[ransomNote[i]] -= 1;
    }

    return true;
}