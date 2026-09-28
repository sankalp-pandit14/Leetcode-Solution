class Solution {
public:
    
    int finder(vector<int>& nums, int goal) {
        if(goal < 0)
            return 0;

        int l = 0, r = 0;
        int sum = 0;
        int count = 0;
        int n = nums.size();

        while(r < n) {

            sum += nums[r]%2;

            while(sum > goal) {
                sum -= nums[l]%2;
                l++;
            }

            count += r - l + 1;

            r++;
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return finder(nums,k)-finder(nums,k-1);
    }
};