class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int n= nums.size();
        int sum=0;
        int length=0;
        int mini= INT_MAX;
        for(int r=0;r<n;r++){
        sum+= nums[r];
        while(sum>=target){
            length=r-l+1;
            mini= min(mini,length);
            sum-=nums[l];
            l++;
        }
        }
        return mini == INT_MAX ? 0 : mini;
    }
};