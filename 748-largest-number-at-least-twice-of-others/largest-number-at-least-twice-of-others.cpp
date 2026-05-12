class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();

        int maxi = INT_MIN;
        int maxi2 = INT_MIN;

        int index = 0;

        for(int i = 0; i < n; i++) {

            if(maxi < nums[i]) {
                maxi2 = maxi;
                maxi = nums[i];
                index = i;
            }

            else if(nums[i] > maxi2) {
                maxi2 = nums[i];
            }
        }

        if(maxi >= (maxi2 * 2)) {
            return index;
        }

        return -1;
    }
};