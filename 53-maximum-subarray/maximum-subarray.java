class Solution {
    public int maxSubArray(int[] nums) {
        int bestEnding = nums[0];
        int ans = bestEnding;

        for(int i = 1; i < nums.length; i++){
            int value1 = bestEnding + nums[i];
            int value2 = nums[i];

            bestEnding = Math.max(value1, value2);
            ans = Math.max(bestEnding, ans);  
        }

        return ans;
    }
}