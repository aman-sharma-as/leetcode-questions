#include<math.h>
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int rightSum = accumulate(nums.begin()+1, nums.end(), 0);
        ans[0] = rightSum;
        int leftSum = nums[0];
        for(int i = 1; i < n; i++){
            rightSum -= nums[i];
            ans[i] = abs(leftSum - rightSum);
            leftSum +=nums[i];
        }
        return ans;
        
        
        
        //-------x------ Brute Force ----x-------
        // int index = 0;
        // while(index < n){
        //     int leftSum = 0, rightSum = 0;
        //     for(int i = 0; i < index; i++){
        //         leftSum += nums[i];
        //     }
        //     for(int i = index + 1; i < n; i++){
        //         rightSum += nums[i];
        //     }
        //     int sum = abs(leftSum - rightSum);
        //     ans.push_back(sum);
        //     index++;
        // }
        // return ans;
    }
};