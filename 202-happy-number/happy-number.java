class Solution {
    int sumSquare(int n){
        int sum = 0, rem;
        while(n > 0){
            rem = n % 10;
            n /= 10;
            sum = sum + rem * rem;
        }
        return sum;
    }

    public boolean isHappy(int n) {
        int fast = n, slow = n;
        while(fast != 1){
            slow = sumSquare(slow);
            fast = sumSquare(fast);
            fast = sumSquare(fast);
            if(fast != 1 && slow == fast)
                return false;
        }
        return true;
    }
}