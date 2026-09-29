class Solution {
public:
    int factCount(int n) {
        int ans = 0;
        int sum = 0;

        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                ans++;
                sum += i;

                if(i != n / i) {
                    ans++;
                    sum += n / i;
                }
            }
        }

        if(ans == 4) {
            return sum;
        }

        return 0;
    }

    int sumFourDivisors(vector<int>& nums) {
        int counter = 0;

        for(int i = 0; i < nums.size(); i++) {
            counter += factCount(nums[i]);
        }

        return counter;
    }
};