#include <stdio.h>

#include "solution.h"

int main() {
    /*
        Input: x = 121
        Output: true
        Explanation: 121 reads as 121 from left to right and from right to left.
    */
    printf("%d\n", isPalindrome(121));

    /*
        Input: x = -121
        Output: false
        Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
    */
    printf("%d\n", isPalindrome(-121));

    /*
        Input: x = 10
        Output: false
        Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
    */
    printf("%d\n", isPalindrome(10));
    
    return 0;
}