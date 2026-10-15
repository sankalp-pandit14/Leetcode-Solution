class Solution {
public:
    int numSub(string s) {
        long long count = 0;
        long long total = 0;
        int mod = 1e9 + 7;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                count++;
            } else {
                count = 0;
            }

            total = (total + count) % mod;
        }

        return total;
    }
};