class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int temp = x;
        if(x<0) 
        {
            return false;
        }
        while(x) 
        {
            if(rev>INT_MAX/10 || rev< INT_MIN/10) return 0;
            rev = rev*10 + x%10;
            x = x/10;

        }
        return temp == rev;
        
    }
};
