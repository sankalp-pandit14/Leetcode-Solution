class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=1; i<=nums.size();i++){
            if(mpp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};