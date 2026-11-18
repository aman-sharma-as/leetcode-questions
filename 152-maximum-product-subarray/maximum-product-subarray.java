class Solution {
    public int maxProduct(int[] nums) {
        int minEnd = nums[0], maxEnd = nums[0], ans = nums[0];

        for(int i = 1; i < nums.length; i++){
            int val1 = minEnd * nums[i];
            int val2 = maxEnd * nums[i];
            int val3 = nums[i];

            maxEnd = Math.max(Math.max(val1, val2), val3);
            minEnd = Math.min(Math.min(val1, val2), val3);
            ans = Math.max(Math.max(maxEnd, minEnd), ans);
        }

        return ans;
    }
}