class Solution {
    public int triangleNumber(int[] nums) {
        int i, j, k = nums.length - 1, count = 0;
        
        if(nums.length < 3)
            return count;
        
        Arrays.sort(nums);
        for(k = nums.length - 1; k >= 2; k--){
            i = 0;
            j = k - 1;
            while(i < j){
                if(nums[i] + nums[j] <= nums[k])
                    i++;
                else{
                    count += j - i;
                    j--;
                }
            }
        }
        return count;
    }
}