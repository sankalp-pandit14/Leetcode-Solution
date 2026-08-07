class Solution {
public:
       void permutate(vector<vector<int>>&ans, vector<int>&ds,vector<int>& nums,vector<int>& freq){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]!=1){
            ds.push_back(nums[i]);// choose
            freq[i]=1;
            permutate(ans,ds,nums,freq);
            freq[i]=0;  // unchoose makeit available at end all available now new use started
            ds.pop_back();
        }}
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        vector<int> freq(nums.size(), 0);
        permutate(ans,ds,nums,freq);
        return ans;
    }
};