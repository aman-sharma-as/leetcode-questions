class Solution {
    public int longestOnes(int[] nums, int k) {
        int maxLen = 0, currLen = 0, zeros = 0;
        for(int high = 0, low = 0; high < nums.length; high++){
            if(nums[high] == 0)
                zeros++;
            // currLen = high - low + 1;
            if(zeros > k){
                if(nums[low] == 0)
                    zeros--;
                low++;
                // currLen = high - low + 1;
            }
            maxLen = Math.max(maxLen, high - low + 1);
        }

        return maxLen;
    }
}