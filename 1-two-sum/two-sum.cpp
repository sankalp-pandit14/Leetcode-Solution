class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            int rem= target-nums[i];
            if(mp.find(rem)!=mp.end()){      // findd krta hg kya tera rem ka jo value dale h wo h set me 
                return {mp[rem],i};            // return krta h i vo value jab rem find hoga set me aur value rem ka not key
            }
           mp[nums[i]]=i;  // key and value is tored in the unorederd map samjheeeeeeeeeeeeee
        }
        return {-1,-1};
    }
};