class Solution {
public:
    void f(vector<vector<int>>& ans, vector<int>& ds,
           vector<int>& arr, int ind){

        ans.push_back(ds);

        for(int i = ind; i < arr.size(); i++){

            if(i > ind && arr[i] == arr[i-1])
                continue;

            ds.push_back(arr[i]);

            f(ans, ds, arr, i + 1);

            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> ds;

        f(ans, ds, nums, 0);

        return ans;
    }
};