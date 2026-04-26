class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>pyaar;
        vector<int>temp;
        for(int  i=0;i<n;i++){
            if(nums[i]==0){
         temp.push_back(nums[i]);
            }
            else {
                pyaar.push_back(nums[i]);
            }
            nums.clear();
            nums.insert(nums.end(),pyaar.begin(),pyaar.end());
            nums.insert(nums.end(),temp.begin(),temp.end());
        }
    }
};
/*int j = 0;
for(int i = 0; i < n; i++){
    if(nums[i] != 0){
        swap(nums[i], nums[j]);
        j++;
    }
}*/