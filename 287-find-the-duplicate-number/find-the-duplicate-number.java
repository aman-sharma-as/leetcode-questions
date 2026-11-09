class Solution {
    public int findDuplicate(int[] nums) {
        int fast = 0, slow = 0;

        if(nums.length == 1)
            return nums[0];
        
        slow = nums[slow];
        fast = nums[nums[fast]];

        while(fast != slow){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        slow = 0;
        while(fast != slow){
            fast = nums[fast];
            slow = nums[slow];
        }

        return slow;
    }
}