class Solution {
private:
    void solve(vector<int> &nums, vector<vector<int>> &ans, int index){
        if(index >= nums.size()){
            // Storing final output in answer
            ans.push_back(nums);
            return;
        }
        for(int i = index; i < nums.size(); i++){
            // swapping for all iterations of elements
            swap(nums[index], nums[i]);
            solve(nums, ans, index + 1);
            // swapping back to backtrack the original array to prevent inconsistent answers
            swap(nums[index], nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};
