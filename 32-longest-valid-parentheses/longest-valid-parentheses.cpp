class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<int> st;
        st.push(-1);

        int value = 0;

        for(int i = 0; i < n; i++) {
            char c = s[i];

            if(c == '(') {
                st.push(i);
            }
            else {
                st.pop();

                if(st.empty()) {
                    st.push(i);
                }
                else {
                    value = max(value, i - st.top());
                }
            }
        }

        return value;
    }
};