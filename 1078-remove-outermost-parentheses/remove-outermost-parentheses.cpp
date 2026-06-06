class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string finalAns;
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                if(count > 0) {
                    finalAns += s[i];
                }
                count++;
            }
            else {
                count--;
                if(count > 0) {
                    finalAns += s[i];
                }
            }
        }

        return finalAns;
    }
};