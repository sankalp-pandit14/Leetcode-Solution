class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;

        while (a || b || c) {
            int a1 = a & 1;
            int b1 = b & 1;
            int c1 = c & 1;

            if (c1 == 0) {
                ans += a1 + b1;
            }
            else {
                if (a1 == 0 && b1 == 0)
                    ans++;
            }

            a >>= 1;
            b >>= 1;
            c >>= 1;
        }

        return ans;
    }
};