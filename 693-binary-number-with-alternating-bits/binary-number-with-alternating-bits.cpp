class Solution {
public:
    bool hasAlternatingBits(int n) {

        int twwww = n & 1;
        n = n >> 1;

        while(n != 0) {
            int cu = n & 1;

            if(cu == twwww)
                return false;

            twwww = cu;
            n = n >> 1;
        }
        return true;
    }
};