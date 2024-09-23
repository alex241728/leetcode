import java.util.HashMap;
import java.util.Map;

class Solution {
    public boolean wordPattern(String pattern, String s) {
        int len = pattern.length();
        String[] words = s.split(" ");

        if (words.length != len) {
            return false;
        }

        Map<Character, String> pToS = new HashMap<>();
        Map<String, Character> sToP = new HashMap<>();
        for (int i = 0; i < len; i++) {
            char c = pattern.charAt(i);
            String w = words[i];

            if (!pToS.containsKey(c) && !sToP.containsKey(w)) {
                pToS.put(c, w);
                sToP.put(w, c);
            }
            if (pToS.containsKey(c) && !w.equals(pToS.get(c)) ) {
                return false;
            }
            if (sToP.containsKey(w) && c != sToP.get(w)) {
                return false;
            }
        }

        return true;
    }
}