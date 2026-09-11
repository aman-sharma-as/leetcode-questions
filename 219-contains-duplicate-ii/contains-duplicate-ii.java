class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        if(nums.length < 2)
            return false;

        HashSet<Integer> set = new HashSet<>();
        for(int j = 0; j <= k && j < nums.length; j++){
            if(set.contains(nums[j]))
                return true;
            set.add(nums[j]);
        }
        for(int i = 0, j = k+1; j < nums.length; i++, j++){
            set.remove(nums[i]);
            if(set.contains(nums[j]))
                return true;
            set.add(nums[j]);
        }
        return false;
    }
}