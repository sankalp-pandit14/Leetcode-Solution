class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int n = nums.size();

        vector<int> odd;
        vector<int> even;
        vector<int> arr;

        for(int i = 0; i < n; i++) {

            if(nums[i] % 2 == 0) {
                even.push_back(nums[i]);
            }
            else {
                odd.push_back(nums[i]);
            }
        }

        arr.insert(arr.end(), even.begin(), even.end());
        arr.insert(arr.end(), odd.begin(), odd.end());

        return arr;
    }
};