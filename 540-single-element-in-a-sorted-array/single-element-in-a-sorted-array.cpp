class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int ans=0;
       if(n==1){
    return nums[0];
}
        for(int i=0;i<n;i++){
            if(i==0){
                if(nums[i]!=nums[i+1]){
                    ans=nums[i];
                    break;}}
            else if(i==n-1){
                if(nums[i]!=nums[i-1]){
                    ans= nums[i];
                    break;}}
                    else{
                        if(nums[i]!=nums[i+1]&& nums[i-1]!=nums[i]){
                            ans= nums[i];
                            break;
                        }
                    }
        }
        return ans;
    }
};