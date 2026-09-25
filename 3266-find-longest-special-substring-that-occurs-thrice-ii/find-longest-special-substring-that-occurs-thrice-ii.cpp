class Solution {
public:
    int maximumLength(string s) {

        int n = s.size();

        vector<vector<int>> mapp(26, vector<int>(n + 1, 0));

        char prev = s[0];
        int l = 0;

        for(int i = 0; i < n; i++) {

            char curr = s[i];

            if(curr == prev) {
                l += 1;
                mapp[curr - 'a'][l] += 1;
            }
            else {
                l = 1;
                mapp[curr - 'a'][l] += 1;
                prev = curr;
            }
        }

        int result = 0;

        for(int i = 0; i < 26; i++) {

            int cumsum = 0;

            for(int col = n; col >= 1; col--) {

                cumsum += mapp[i][col];

                if(cumsum >= 3) {
                    result = max(result, col);
                    break;
                }
            }
        }

        return result == 0 ? -1 : result;   //if result==0 return -1 else result
    }
};