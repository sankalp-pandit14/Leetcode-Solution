class Solution {
public:
    int smallestNumber(int n) {
        int ans = 0;

        while (n != 0) {
            if ((n & (n + 1)) == 0) {
                ans = n;
                break;
            }
            else {
                n++;
            }
        }

        return ans;
    }
};