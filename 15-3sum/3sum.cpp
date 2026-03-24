class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Declaring and assining variables
        int mainPointer = 0, leftPointer, rightPointer, numsSize = nums.size(),
        sum = 0;
        vector<vector<int>> result;

        // Sorting given array
        sort(nums.begin(), nums.end());
        for(;mainPointer < numsSize - 2; mainPointer++){
            if(mainPointer > 0 && nums[mainPointer] == nums[mainPointer-1])
                continue;
            sum = -1 * nums[mainPointer];
            leftPointer = mainPointer+1;
            rightPointer = numsSize-1;
            while(leftPointer < rightPointer){
                if(sum == nums[leftPointer]+nums[rightPointer]){
                    result.push_back({nums[mainPointer],nums[leftPointer],
                    nums[rightPointer]});
                    leftPointer++;
                    rightPointer--;
                    while(leftPointer < rightPointer && 
                    nums[leftPointer] == nums[leftPointer-1])
                        leftPointer++;
                    while(rightPointer > mainPointer && nums[rightPointer]== nums[rightPointer+1])
                        rightPointer--;
                }
                else if(sum > nums[leftPointer]+nums[rightPointer]){
                    leftPointer++;
                }
                else{
                    rightPointer--;
                }
            }
        }
        return result;
    }
};