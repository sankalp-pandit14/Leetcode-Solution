class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> sank;
        int sum=0;
        sank[0]=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int remainder= sum%k;
            if(sank.find(remainder)!=sank.end()){
                if(i-sank[remainder]>=2){
                    return true;
                }
            }
            else{
                sank[remainder]=i;
            }
        }
        return false;
    }
};