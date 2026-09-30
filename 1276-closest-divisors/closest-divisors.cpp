class Solution {
public:
    vector<int> factorFinder(int n) {   // same mistake did here its returning arr not integer 

        int mini = INT_MAX;
        vector<int> ans(2, 0);

        int x = 0;
        int y = 0;

        for(int i = 1; i * i <= n; i++) {

            if(n % i == 0) {

                x = i;
                y = n / i;

                if(abs(x - y) < mini) {
                    mini = abs(x - y);

                    ans[0] = x;
                    ans[1] = y;
                }
            }
        }

        return ans;
    }

    vector<int> closestDivisors(int num) {

        int num1 = num + 1;
        int num2 = num + 2;

        vector<int> ans1 = factorFinder(num1);         // if return arr you have to use vector<int>
        vector<int> ans2 = factorFinder(num2);

        int mini = abs(ans2[0] - ans2[1]);

        if(abs(ans1[0] - ans1[1]) < mini) {
            return ans1;
        }
        else {
            return ans2;
        }
    }
};