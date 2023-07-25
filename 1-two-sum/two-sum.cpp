class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]=i;
        }
        int dif;
        for(int j=0; j < nums.size(); j++)
        {
            dif=target - nums[j];
            if(map.find(dif)!=map.end())
            {
                if(map[dif]!=j)
                    return {j, map[dif]};
            }
        }
        return {-1,-1};
    }
};