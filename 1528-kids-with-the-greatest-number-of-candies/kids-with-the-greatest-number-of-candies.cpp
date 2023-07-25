class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int max = 0;
        for(int i = 0; i < n; i++){
            if(candies[i] > max){
                max = candies[i];
            }
        }
        vector<bool> result;
        for(int i = 0; i < n; i++){
            if((candies[i]+extraCandies) >= max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};