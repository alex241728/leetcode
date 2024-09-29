#include <stdio.h>

#include "solution.h"

int main() {
    /*
        Input: s = "abcabcbb"
        Output: 3
        Explanation: The answer is "abc", with the length of 3.
    */
    printf("%d\n", lengthOfLongestSubstring("abcabcbb"));

    /*
        Input: s = "bbbbb"
        Output: 1
        Explanation: The answer is "b", with the length of 1.
    */
    printf("%d\n", lengthOfLongestSubstring("bbbbb"));

    /*
        Input: s = "pwwkew"
        Output: 3
        Explanation: The answer is "wke", with the length of 3.
        Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
    */
    printf("%d\n", lengthOfLongestSubstring("pwwkew"));
}