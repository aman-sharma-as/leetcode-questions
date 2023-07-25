class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum = 0;
        int currentSum = 0;
        int row = accounts.size();
        int col = accounts[0].size();
        for(int i = 0; i < row; i++){
            currentSum = 0;
            for(int j = 0; j < col; j++){
                currentSum += accounts[i][j];
            }
            if(maxSum <= currentSum){
                maxSum = currentSum;
            }
        }
        return maxSum;
    }
};