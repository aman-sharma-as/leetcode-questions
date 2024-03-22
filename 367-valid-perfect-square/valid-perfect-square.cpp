class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1;
        long long end = num, mid = start + (end - start) / 2;
        while(start <= end){
            long long sq = mid * mid;

            if(sq == num){
                return true;
            }
            else if(sq < num){
                start = mid + 1;
            }
            else if(sq > num){
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return false;
    }
};