class Solution {
private:
    void solve( string &digit, string mapping[], int index, string output, vector<string> &ans ){
        int size = digit.length();
        if(index >= size){
            ans.push_back(output);
            return;
        }
        int element = digit[index] - '0';
        string value = mapping[element];
        for(int i = 0; i < value.length(); i++){
            output.push_back(value[i]);
            solve(digit, mapping, index+1, output, ans);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0)
            return ans;
        string output = "";
        string mapping[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int index = 0;
        solve(digits, mapping, index, output, ans);
        return ans;
    }
};