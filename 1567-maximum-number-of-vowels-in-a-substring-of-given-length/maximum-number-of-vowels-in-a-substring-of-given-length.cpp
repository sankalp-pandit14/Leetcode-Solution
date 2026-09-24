class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int l = 0;
        int count = 0, maxAns = 0;

        for (int r = 0; r < n; r++) {
            if (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' ||
                s[r] == 'o' || s[r] == 'u') {
                count++;
            }
            if (r - l + 1 > k) {
                if (s[l] == 'a' || s[l] == 'e' || s[l] == 'i' ||
                    s[l] == 'o' || s[l] == 'u') {
                    count--;
                }

                l++;
            }
            if (r - l + 1 == k) {
                maxAns = max(maxAns, count);
            }
        }

        return maxAns;
    }
};