class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroVal = 0;
        int oneVal = 0;
        int twoVal = 0, numsSize = nums.size(),
        ptr = 0;

        for(int i = 0; i < numsSize; i++){
            if(nums[i] == 0)
                zeroVal++;
            else if(nums[i] == 1)
                oneVal++;
            else if(nums[i] == 2)
                twoVal++;
        }

        while(ptr < zeroVal){
            nums[ptr++] = 0;
        }

        while(ptr < zeroVal+oneVal){
            nums[ptr++] = 1;
        }

        while(ptr < zeroVal+oneVal+twoVal){
            nums[ptr++] = 2;
        }
    }
};