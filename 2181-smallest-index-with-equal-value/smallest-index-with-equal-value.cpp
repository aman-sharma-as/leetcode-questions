class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        stack<int> s;
        for(int i = nums.size() - 1; i >= 0; i--){
            int curr = nums[i];
            if(curr == (i % 10)){
                s.push(i);
            }
        }
        if(s.empty()){
            return -1;
        }
        else{
            return s.top();
        }
    }
};