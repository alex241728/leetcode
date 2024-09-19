#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** letterCombinations(char* digits, int* returnSize);
void backtrack(char* digits, int* returnSize, const char* letters[], char** combinations, char* current, int index);
void printStringList(char** strs, int size);
void freeStringList(char** strs, int size);

int main() {
    char** ret = NULL;
    int retSize = 0;

    /*
        Input: digits = "23"
        Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
    */
    ret = letterCombinations("23", &retSize);
    printStringList(ret, retSize);
    freeStringList(ret, retSize);
    retSize = 0;

    /*
        Input: digits = ""
        Output: []
    */
    ret = letterCombinations("", &retSize);
    printStringList(ret, retSize);
    freeStringList(ret, retSize);
    retSize = 0;

    /*
        Input: digits = "2"
        Output: ["a","b","c"]
    */
    ret = letterCombinations("2", &retSize);
    printStringList(ret, retSize);
    freeStringList(ret, retSize);
    retSize = 0;
}

char** letterCombinations(char* digits, int* returnSize) {
    // letters[digit - 2] = possibleValues
    const char* letters[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    // find the number of possible combinations
    int len = strlen(digits);
    if (len == 0) {
        *returnSize = 0;
        return NULL;
    }
    int rows = 1;
    for (int i = 0; i < len; i++) {
        rows *= strlen(letters[digits[i] - '2']);
    }

    // allocate memory
    char** combinations = (char**) malloc(sizeof(char*) * rows);
    char* combination = (char*) malloc(sizeof(char) * (len + 1));
    combination[len] = '\0';

    // backtrack
    *returnSize = 0;
    backtrack(digits, returnSize, letters, combinations, combination, 0);

    free(combination);

    return combinations;
}

void backtrack(char* digits, int* returnSize, const char* letters[], char** combinations, char* current, int index) {
    if (index == strlen(digits)) {
        combinations[*returnSize] = strdup(current);
        (*returnSize)++;
        return;
    }

    int digit = digits[index] - '2';
    for (int i = 0; i < strlen(letters[digit]); i++) {
        current[index] = letters[digit][i];
        backtrack(digits, returnSize, letters, combinations, current, index + 1);
    }

}

void printStringList(char** strs, int size) {
    if (strs == NULL) {
        printf("[]\n");
        return;
    }

    printf("[");
    int i = 0;
    while (i < size - 1) {
        printf("%s, ", strs[i]);
        i++;
    }
    printf("%s]\n", strs[i]);
}

void freeStringList(char** strs, int size) {
    if (strs == NULL) {
        return;
    }

    for (int i = 0; i < size; i++) {
        free(strs[i]);
    }
    free(strs);
}