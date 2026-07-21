class Solution {
public:
    void f(vector<vector<int>>&ans,vector<int>ds, int n, int k, int start){
        if(ds.size()==k){
            ans.push_back(ds);
            return;
        }
        for(int i=start;i<=n;i++){
            ds.push_back(i);
            f(ans,ds,n,k,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>>ans;
    vector<int>ds;
    f(ans,ds,n,k,1);
    return ans;
    }
};