class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> mp = new HashMap<>();
        char newChar, prevChar;
        int maxLen = 0;
        for(int high = 0, low = 0; high < s.length(); high++){
            newChar = s.charAt(high);
            mp.put(newChar, mp.getOrDefault(newChar, 0) + 1);
            while(mp.getOrDefault(newChar, 0) > 1){
                prevChar = s.charAt(low);
                mp.put(prevChar, mp.get(prevChar) - 1);
                if(mp.get(prevChar) == 0)
                    mp.remove(prevChar);
                low++;
            }
            maxLen = Math.max(high - low + 1, maxLen);
        }

        return maxLen;
    }
}