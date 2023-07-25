#include<math.h>
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int index = 0;
        while(index < n){
            int leftSum = 0, rightSum = 0;
            for(int i = 0; i < index; i++){
                leftSum += nums[i];
            }
            for(int i = index + 1; i < n; i++){
                rightSum += nums[i];
            }
            int sum = abs(leftSum - rightSum);
            ans.push_back(sum);
            index++;
        }
        return ans;
    }
};