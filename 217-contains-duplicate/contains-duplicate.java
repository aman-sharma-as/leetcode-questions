class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set <Integer> freqSet = new HashSet<>();

        for(int num: nums){
            if(!freqSet.add(num))
                return true;
        }

        return false;
    }
}