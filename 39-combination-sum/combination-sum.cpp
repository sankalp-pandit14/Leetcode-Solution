class Solution {
public:
    void f(int ind,vector<int>& arr,int target,vector<vector<int>>&ans,vector<int>ds){
        if(ind==arr.size()){
         if(target==0){
            ans.push_back(ds);
         }
         return;
        }//pick up
        if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        f(ind,arr,target-arr[ind],ans,ds);// if target becomes less than the arr[ind] then it will move to 
        ds.pop_back();
        }
        // not pick up
        f(ind+1,arr,target,ans,ds);   // this part where index will increase
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int>ds; // array in which we put all the elements
    f(0,candidates,target,ans,ds);
    return ans;
       }
};