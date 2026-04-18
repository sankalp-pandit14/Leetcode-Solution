class Solution {
public:
    bool isPalindrome(int x) {
        int reverse=0;
        int original=x; // forgot to update the real value 
         if(original<0){
            return false;
        }
        while(x!=0){
            int digit= x%10;
            if(reverse>INT_MAX/10 || reverse<INT_MIN/10)
            {
                return 0;
            }
            reverse= reverse*10+ digit;
            x=x/10;
        }
        if (reverse== original)
        {
            return true;
        }
       
        else{
            return false;
        }
    }
};