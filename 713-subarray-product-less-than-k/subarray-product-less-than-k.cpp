class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int low = 0, high = 0, product = 1, numsSize = nums.size(),
        count = 0;

        for(high = 0; high < numsSize; high++){
            product = product * nums[high];
            
            while(product >= k && high != low){
                product = product / nums[low];
                low++;
            }
            
            if(product < k){
                count = high - low + 1 + count;
            }            
        }
        return count;
    }
};