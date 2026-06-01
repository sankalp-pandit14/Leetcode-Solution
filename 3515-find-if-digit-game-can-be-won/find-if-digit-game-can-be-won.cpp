class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int sum1=0;
        for(int i=0;i<n;i++){
            if(nums[i]<10){
                sum+=nums[i];
            }
            else{
                sum1+=nums[i];
            }
        }
        if(sum>sum1 || sum1>sum){
            return true;
        }
        else{
            return false;
        }
    }
};