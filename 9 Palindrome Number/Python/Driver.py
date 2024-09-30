from Solution import Solution

class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: x = 121
            Output: true
            Explanation: 121 reads as 121 from left to right and from right to left.
        """
        print(s.isPalindrome(121))

        """_summary_
            Input: x = -121
            Output: false
            Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
        """
        print(s.isPalindrome(-121))

        """_summary_
            Input: x = 10
            Output: false
            Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
        """
        print(s.isPalindrome(10))