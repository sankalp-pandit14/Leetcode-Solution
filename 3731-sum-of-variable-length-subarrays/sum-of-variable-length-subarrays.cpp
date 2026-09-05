class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n= nums.size();
        vector<int>Prefix(n+1,0);
        int sum=0;
        for(int i=0;i<n;i++){
        Prefix[i+1]=Prefix[i]+nums[i];
        }
        for(int i=0;i<n;i++){
            int start = max(0, i - nums[i]);
            int val=i;
            sum+=Prefix[val+1]-Prefix[start];
        }
        return sum;
    }
};