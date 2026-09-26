class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int>st(begin(nums),end(nums));
        int c= st.size();
        int l=0;
        int r=0;
        int result=0;
        unordered_map<int,int>mpp;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()==c){
            result+=(n-r);
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0) mpp.erase(nums[l]);
            l++;
            }
            r++;
        }
        return result;
    }
};