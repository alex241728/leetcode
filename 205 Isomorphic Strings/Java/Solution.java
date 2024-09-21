import java.util.HashMap;
import java.util.Map;

class Solution {
    public boolean isIsomorphic(String s, String t) {
        int len = s.length();
        
        Map<Character, Character> sToT = new HashMap<>();
        Map<Character, Character> tToS = new HashMap<>();

        for (int i = 0; i < len; i++) {
            char charS = s.charAt(i);
            char charT = t.charAt(i);

            if (!sToT.containsKey(charS) && !tToS.containsKey(charT)) {
                sToT.put(charS, charT);
                tToS.put(charT, charS);
            }
            if (sToT.containsKey(charS) && !sToT.get(charS).equals(charT)) {
                return false;
            }
            if (tToS.containsKey(charT) && !tToS.get(charT).equals(charS)) {
                return false;
            }
        }

        return true;
    }
}
