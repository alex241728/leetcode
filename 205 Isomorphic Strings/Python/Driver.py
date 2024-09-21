from Solution import Solution

class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: s = "egg", t = "add"

            Output: true

            Explanation:
            The strings s and t can be made identical by:
            Mapping 'e' to 'a'.
            Mapping 'g' to 'd'.
        """
        print(s.isIsomorphic("egg", "add"))

        """_summary_
            Input: s = "foo", t = "bar"

            Output: false

            Explanation:
            The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.
        """
        print(s.isIsomorphic("foo", "bar"))

        """_summary_
            Input: s = "paper", t = "title"

            Output: true
        """
        print(s.isIsomorphic("paper", "title"))