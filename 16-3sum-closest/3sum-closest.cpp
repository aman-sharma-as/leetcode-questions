class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int leftPointer, rightPointer, currDiff, resultSum,
        maxDiff = INT_MAX, sum, numsSize = nums.size();

        sort(nums.begin(), nums.end());
        for(int i = 0; i < numsSize - 2; i++){
            leftPointer = i + 1;
            rightPointer = numsSize - 1;
            sum = 0;
            while(leftPointer < rightPointer){
                sum = nums[i] + nums[leftPointer] + nums[rightPointer];
                currDiff = abs(target - sum);

                if(currDiff < maxDiff){
                    maxDiff = currDiff;
                    resultSum = sum;
                }

                if(sum == target){
                    return sum;
                }
                else if(sum < target){
                    leftPointer++;
                }
                else if(sum > target){
                    rightPointer--;
                }
            }
        }
        return resultSum;
    }
};