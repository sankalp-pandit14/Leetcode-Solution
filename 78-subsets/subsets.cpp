class Solution {
public:
    void f( vector<vector<int>>& ans, vector<int>ds,vector<int>& arr, int ind){
        if(ind==arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[ind]);
        f(ans,ds,arr,ind+1);
        ds.pop_back();
        f(ans,ds,arr,ind+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        f(ans,ds,nums,0);
        return ans;
    }
};