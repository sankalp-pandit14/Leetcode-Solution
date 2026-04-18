class Solution {
public:
    int reverse(int x) 
    {        
        int reversal=0;

        while(x!=0)
            {
                int rev=x%10;
                 if (reversal > INT_MAX / 10 || reversal < INT_MIN / 10)
                return 0;
                reversal= reversal*10+ rev;
                x=x/10;
            }
               return reversal;// cout is not required just a return statement 
    }
};