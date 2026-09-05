class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n= nums.size();
        vector<int>prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+nums[i];
        } int count=0;
        for(int i=1;i<=n;i++){
            if(prefix[i]==0){
                count++;
            }
        }
        return count;
    }
};