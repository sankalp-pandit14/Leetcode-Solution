class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int> value;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            value[nums[i]]++;
        }

        sort(nums.begin(), nums.end(),
            [&](int a, int b) {

                if(value[a] == value[b]) {
                    return a > b;   // if true a comes before b
                }

                return value[a] < value[b]; // if true  b comes a
            });

        return nums;
    }
};