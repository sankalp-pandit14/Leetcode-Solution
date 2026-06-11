// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();
//         long long sum = 0;
//         long long ans = 0;
//         vector<int> final;

//         for (int i = 0; i < n; i++) {
//             sum = sum * 10 + digits[i];
//         }

//         ans = sum + 1;

//         if (ans == 0) {    
//             final.push_back(0);
//             return final;
//         }

//         while (ans > 0) {
//             final.push_back(ans % 10);
//             ans /= 10;
//         }

//         reverse(final.begin(), final.end());
//         return final;
//     }
// };
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {

            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        vector<int> final;
        final.push_back(1);

        for(int i = 0; i < n; i++) {
            final.push_back(digits[i]);
        }

        return final;
    }
};