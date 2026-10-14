class Solution {
public:
    vector<int> findnse(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> nse(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return nse;
    }

    vector<int> findpse(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> pse(n, 0);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return pse;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();

        vector<int> nse = findnse(arr);
        vector<int> pse = findpse(arr);

        long long total = 0;
        int mod = 1e9 + 7;

        for (int i = 0; i < n; i++) {
            int left = i - pse[i];
            int right = nse[i] - i;

            total = (total + (right * 1LL * left * arr[i]) % mod) % mod;
        }

        return total;
    }
};