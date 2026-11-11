class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int[] digitArr = new int[nums.length];
        List<Integer> result = new ArrayList<>();

        for(int i = 0; i < nums.length; i++){
            digitArr[nums[i] - 1] += 1;
        }

        for(int i = 0; i < digitArr.length; i++){
            if(digitArr[i] == 0)
                result.add(i+1);
        }

        return result;
    }
}