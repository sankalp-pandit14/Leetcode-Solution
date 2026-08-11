class Solution {
public:
    void solvepermu(vector<vector<int>>& ans,
                    vector<int>& nums,
                    int index) {
        int n = nums.size();
        if(index == n) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> used;
        for(int i = index; i < n; i++) {
            if(used.count(nums[i]))
                continue;
            used.insert(nums[i]);
            swap(nums[index], nums[i]);
            solvepermu(ans, nums, index + 1);
            swap(nums[index], nums[i]);   }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;

        solvepermu(ans, nums, 0);

        return ans;
    }
};
// the problem in this code is about duplicates so we will make a set to check if the duplicates are repeated or not