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

    long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();

        vector<int> nse = findnse(arr);
        vector<int> pse = findpse(arr);

        long long total = 0;

        for (int i = 0; i < n; i++) {
            long long left = i - pse[i];
            long long right = nse[i] - i;

            total += right * left * arr[i];
        }

        return total;
    }

    vector<int> findnsemax(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> nse(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }

            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return nse;
    }

    vector<int> findpsemax(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> pse(n, 0);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }

            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return pse;
    }

    long long sumSubarrayMax(vector<int>& arr) {
        int n = arr.size();

        vector<int> nse = findnsemax(arr);
        vector<int> pse = findpsemax(arr);

        long long total = 0;

        for (int i = 0; i < n; i++) {
            long long left = i - pse[i];
            long long right = nse[i] - i;

            total += right * left * arr[i];
        }

        return total;
    }

    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMax(nums) - sumSubarrayMins(nums);
    }
};