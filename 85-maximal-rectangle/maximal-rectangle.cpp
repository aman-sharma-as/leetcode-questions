class Solution {
private:
    vector<int> prevSmaller(vector<int>&arr, int m){
        stack<int> s;
        s.push(-1);
        vector<int> ans(m);
        for(int i = 0; i < m; i++){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> nextSmaller(vector<int>&arr, int m){
        stack<int> s;
        s.push(-1);
        vector<int> ans(m);
        for(int i = m - 1; i >= 0; i--){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>&arr){
        int m = arr.size();
        vector<int> prev(m);
        vector<int> next(m);
        prev = prevSmaller(arr, m);
        next = nextSmaller(arr, m);
        int area = -1;
        for(int i = 0; i < m; i++){
            int l = arr[i];
            if(next[i] == -1){
                next[i] = m;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> height(n, 0);
        int area = -1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == '1'){
                    height[j]++;
                }
                else{
                    height[j]=0;
                }
            }
            area = max(area, largestRectangleArea(height));
        }
        return area;
    }
};