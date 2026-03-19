class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //Declaring all variable and new vector array
        int leftPointer = 0, rightPointer = 0,
        leftTerm = 0, rightTerm = 0, numsSize = nums.size(),
        ptr = 0;
        vector<int> newArr(numsSize, 0);

        // Setting pointers positions negative and positive pointers
        // Find the first non-negative number
        while(rightPointer < numsSize && nums[rightPointer] < 0) {
            rightPointer++;
        }
        // Set leftPointer to the last negative number
        leftPointer = rightPointer - 1;

        // Logic starts here
        // Either Positive part or negative part finish first
        while(leftPointer >= 0 && rightPointer < numsSize){
            leftTerm = nums[leftPointer]*nums[leftPointer];
            rightTerm = nums[rightPointer]*nums[rightPointer];
            if(leftTerm < rightTerm){
                newArr[ptr++] = leftTerm;
                leftPointer--;
            }
            else{
                newArr[ptr++] = rightTerm;
                rightPointer++;
            }
        }

        // Negative part
        while(leftPointer >= 0){
            newArr[ptr++] = nums[leftPointer] * nums[leftPointer--];
        }
        // Positive part
        while(rightPointer < numsSize){
            newArr[ptr++] = nums[rightPointer] * nums[rightPointer++];
        }

        return newArr;
    }
};