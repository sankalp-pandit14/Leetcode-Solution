class Solution {
public:
    vector<string> ans;

    void f(string s, int open, int close, int n) {
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (open < n) {
            f(s + '(', open + 1, close, n);
        }

        if (close < open) {
            f(s + ')', open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        // ans.clear();         this is written only for cases when i firstly put input as n=2 then it will print (()), ()() and then when i give input as 3 it wont remove the previous 2 but also add it tthats why.
        f("", 0, 0, n);
        return ans;
    }
};