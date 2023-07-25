class Solution {
public:
    // using unordered map
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int ans = 0;
        for(auto num : nums){
            ans += m[num];
            m[num]++;
        }
        return ans;

        //Using two for loops
        // int count = 0;
        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     for(int j = i + 1; j < n; j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};
