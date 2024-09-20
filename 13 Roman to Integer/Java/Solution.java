import java.util.Map;
import java.nio.charset.CharacterCodingException;
import java.util.HashMap;


class Solution {
    public int romanToInt(String s) {
        int res = 0;

        if (s.contains("IV") || s.contains("IX")) {
            res -= 2;
        }
        if (s.contains("XL") || s.contains("XC")) {
            res -= 20;
        }
        if (s.contains("CD") || s.contains("CM")) {
            res -= 200;
        }

        Map<Character, Integer> map = new HashMap<>();
        map.put('I', 1);
        map.put('V', 5);
        map.put('X', 10);
        map.put('L', 50);
        map.put('C', 100);
        map.put('D', 500);
        map.put('M', 1000);
        
        for (int i = 0; i < s.length(); i++) {
            res += map.get(s.charAt(i));
        }

        return res;
    }
}