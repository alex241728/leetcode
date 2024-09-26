from Solution import Solution


class Driver:
    if __name__ == "__main__":
        s: Solution = Solution()

        """_summary_
            Input: strs = ["eat","tea","tan","ate","nat","bat"]

            Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

            Explanation:
            There is no string in strs that can be rearranged to form "bat".
            The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
            The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
        """
        print(s.groupAnagrams(["eat","tea","tan","ate","nat","bat"]))

        """_summary_
            Input: strs = [""]

            Output: [[""]]
        """
        print(s.groupAnagrams([""]))

        """_summary_
            Input: strs = ["a"]

            Output: [["a"]]
        """
        print(s.groupAnagrams(["a"]))