class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> sank;
        int sum=0;
        int count=0;
        sank[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int remainder= sum%k;
            if(remainder<0) remainder+=k;
            if(sank.find(remainder)!=sank.end()){
                count+=sank[remainder];
            }
            sank[remainder]++;
        }
        return count;
    }
};