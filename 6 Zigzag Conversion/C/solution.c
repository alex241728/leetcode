#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    size_t len = strlen(s);

    if (numRows == 1 || len <= numRows) {
        return s;
    }

    char* result = (char*) malloc(sizeof(char) * (len + 1));
    int resultLen = 0;

    int max = 2 * (numRows - 1);
    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < len; j += max) {
            result[resultLen] = s[j];
            resultLen++;

            if (i != 0 && i != numRows - 1) {
                int secondIdx = j + max - 2 * i;
                if (secondIdx < len) {
                    result[resultLen] = s[secondIdx];
                    resultLen++;
                }
            }
        }
    }

    result[resultLen] = '\0';
    return result;
}