class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n= nums.size(); unordered_map<int, int> mpp;
        mpp[0]=-1;
        int inc=0;int maxi=0;
        for(int i=0;i<n;i++){
        if(nums[i]==0) inc--;
        else{ inc++;}
        if(mpp.find(inc)!=mpp.end()){
              maxi=max(maxi,i-mpp[inc]);
        }else{
        mpp[inc]=i;
        }}
        return maxi;
    }
};