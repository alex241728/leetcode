from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()
        """_summary_
            Input: pattern = "abba", s = "dog cat cat dog"

            Output: true

            Explanation:
            The bijection can be established as:
                'a' maps to "dog".
                'b' maps to "cat".
        """
        print(s.wordPattern("abba", "dog cat cat dog"))

        """_summary_
            Input: pattern = "abba", s = "dog cat cat fish"

            Output: false
        """
        print(s.wordPattern("abba", "dog cat cat fish"))

        """_summary_
            Input: pattern = "aaaa", s = "dog cat cat dog"

            Output: false
        """
        print(s.wordPattern("aaaa", "dog cat cat dog"))