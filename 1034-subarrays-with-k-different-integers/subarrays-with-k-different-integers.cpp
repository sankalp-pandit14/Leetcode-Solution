class Solution {
public:
     int finder(vector<int>& nums, int goal) {
        unordered_map<int,int> mpp;
        int l = 0, r = 0;
        int count = 0;
        int n = nums.size();
        while(r < n) {
            mpp[nums[r]]++;
            while(mpp.size() > goal) {
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0){
                   mpp.erase(nums[l]);
                }
                l++;
            }
            count += r - l + 1;
            r++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return finder(nums,k)-finder(nums,k-1);
    }
};