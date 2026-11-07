class Solution {
    public int longestOnes(int[] nums, int k) {
        Map<Integer,Integer> mp = new HashMap<>();
        int maxLen = 0, currLen = 0;
        for(int high = 0, low = 0; high < nums.length; high++){
            mp.put(nums[high], mp.getOrDefault(nums[high], 0) + 1);
            currLen = high - low + 1;
            while(currLen - mp.getOrDefault(1,0) > k){
                mp.put(nums[low], mp.getOrDefault(nums[low], 0) - 1);
                if(mp.get(nums[low]) <= 0){
                    mp.remove(nums[low]);
                }
                low++;
                currLen = high - low + 1;
            }
            maxLen = Math.max(maxLen, currLen);
        }

        return maxLen;
    }
}