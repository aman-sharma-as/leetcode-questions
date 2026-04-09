class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0, high = 0, k = -1, strSize = s.size(),
        result = 0;
        unordered_map<char, int> chars;

        for(high = 0; high < strSize; high++){
            chars[s[high]]++;

            k = high - low + 1;
            while(chars.size() < k){
                chars[s[low]]--;
                if(chars[s[low]] == 0)
                    chars.erase(s[low]);
                low++;
                k = high - low + 1;
            }

            if(chars.size() == k){
                k = high - low + 1;
                result = max(result, k);
            }
        }
        return result;
    }
};