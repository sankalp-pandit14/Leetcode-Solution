class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid = (low + high) / 2;

        int count = 0;

        while (low <= high) {
            count += abs(nums[low] - nums[mid]);
            count += abs(nums[high] - nums[mid]);

            low++;
            high--;
        }

        return count;
    }
};