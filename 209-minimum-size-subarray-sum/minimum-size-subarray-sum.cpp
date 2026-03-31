class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0, high = 0, sum = 0, result = INT_MAX,
        numsSize = nums.size();

        while(high < numsSize){
            sum = sum + nums[high];

            while(sum >= target){
                result = min(result, high - low + 1);
                sum = sum - nums[low];
                low++;
            }
            high++;
        }

        return (result == INT_MAX) ? 0 : result;
    }
};