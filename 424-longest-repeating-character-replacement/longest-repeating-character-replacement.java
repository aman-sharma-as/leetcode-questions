class Solution {

    public int characterReplacement(String s, int k) {
        char prevChar, newChar;
        int maxCount = 0, maxLen = 0, result = 0, diff;
        Map<Character, Integer> mp = new HashMap<>();

        for(int low = 0, high = 0; high < s.length(); high++){
            newChar = s.charAt(high);
            mp.put(newChar, mp.getOrDefault(newChar, 0) + 1);
            maxCount = Math.max(mp.get(newChar), maxCount);
            maxLen = high - low + 1;
            diff = maxLen - maxCount;
            while(diff > k){
                prevChar = s.charAt(low);
                mp.put(prevChar, mp.get(prevChar) - 1);
                low++;
                maxLen = high - low + 1;
                diff = maxLen - maxCount;
            }
            maxLen = high - low + 1;
            result = Math.max(maxLen, result);
        }
        return result;
    }
}