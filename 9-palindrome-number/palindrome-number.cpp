class Solution {
public:
    bool isPalindrome(int x) {
        int orignal=x;
        int rem;
        long long reverse=0;
        if(x<0)
        {
            return false;
        }
        while(x>0)
        {
            rem=x%10;
            x=x/10;
            reverse=reverse*10+rem;

        }
        if(orignal==reverse)
        {
            return true;
        }
        return false;
    }
};