class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int counter=0;
        for(int i=1;i<nums.size();i++){
            counter= counter+ nums[i]-nums[0];
        }
        return counter;
    }
};