import java.util.HashMap;
import java.util.Map;

public class Solution {
    public int lengthOfLongestSubstring(String s) {
        int maxLen = 0;
        int startIdx = 0;
        Map<Character, Integer> pastChars = new HashMap<>();

        for (int endIdx = 0; endIdx < s.length(); endIdx++) {
            char currentChar = s.charAt(endIdx);

            if (pastChars.containsKey(currentChar) && pastChars.get(currentChar) >= startIdx) {
                startIdx = pastChars.get(currentChar) + 1;
            }

            pastChars.put(currentChar, endIdx);
            maxLen = Math.max(maxLen, endIdx - startIdx + 1);
        }

        return maxLen;
    }
}
