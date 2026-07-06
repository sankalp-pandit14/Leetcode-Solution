class Solution {
public:
    int arrangeCoins(int n) {
        int checker= n;
        double valu= ceil((double)n/2);
        int val= (double)valu;
        if(n==1) return n;
        int ans=0;
        for(int i = 1; i <= val+1; i++) 
        {
          checker -= i;
          if(checker < 0) {
            ans= i - 1; 
            break;
          }
          if(checker == 0) {
          ans= i;
           break;
          }
        }
        return ans;
    }
};