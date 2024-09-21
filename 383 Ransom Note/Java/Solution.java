import java.util.HashMap;
import java.util.Map;

class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        int ransomLen = ransomNote.length();
        int magLen = magazine.length();

        Map<Character, Integer> charToInt = new HashMap<>();
        for (int i = 0; i < magLen; i++) {
            char key = magazine.charAt(i);
            if (charToInt.containsKey(key)) {
                int value = charToInt.get(key);
                charToInt.put(key, value + 1);
            }
            else {
                charToInt.put(key, 1);
            }
        }

        for (int i = 0; i < ransomLen; i++) {
            char key = ransomNote.charAt(i);
            if (!charToInt.containsKey(key)) {
                return false;
            }
            int value = charToInt.get(key);
            if (value == 0) {
                return false;
            }
            charToInt.put(key, value - 1);
        }

        return true;
    }
}