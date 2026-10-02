class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n = logs.size();
        stack<string> st;

        for(int i = 0; i < n; i++) {
            string c = logs[i];

            if(c == "../") {
                if(!st.empty()) {
                    st.pop();
                }
            }
            else if(c == "./") {
                continue;
            }
            else {
                st.push(c);
            }
        }

        return st.size();
    }
};