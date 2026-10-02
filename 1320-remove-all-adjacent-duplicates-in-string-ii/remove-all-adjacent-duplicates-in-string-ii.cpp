class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        stack<pair<char,int>> st;

        for(int i = 0; i < n; i++) {
            char c = s[i];

            if(!st.empty() && st.top().first == c) {
                st.top().second++;

                if(st.top().second == k) {
                    st.pop();
                }
            }
            else {
                st.push({c, 1});
            }
        }

        string ans;

        while(!st.empty()) {
            char c = st.top().first;
            int value = st.top().second;
            st.pop();

            while(value != 0) {
                ans += c;
                value--;
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};