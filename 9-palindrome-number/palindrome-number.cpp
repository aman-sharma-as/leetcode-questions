class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0)
        {
            long long rev=0;
            int rem;
            int y=x;
            while(y!=0){
                rem=y%10;
                y/=10;
                rev=rev*10+rem;
            }
            if(x==rev)
            {
                return true;
            }
            else
                return false;
        }
        else
        {
            return false;
        }
    }
};