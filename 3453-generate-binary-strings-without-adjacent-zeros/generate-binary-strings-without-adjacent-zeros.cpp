class Solution {
public:
    void solve(int n, string &s, vector<string>& ans)
    {
        if(s.size() == n)
        {
            ans.push_back(s);
            return;
        }
        s.push_back('1');
        solve(n, s, ans);
        s.pop_back();
        if(s.empty() || s.back() != '0')
        {
            s.push_back('0');
            solve(n, s, ans);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) 
    {
        string s = "";
        vector<string> ans;

        solve(n, s, ans);

        return ans;
    }
};