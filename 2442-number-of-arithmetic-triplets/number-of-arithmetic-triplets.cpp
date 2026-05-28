class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {

        set<vector<int>> st;
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            set<int> hashset;

            hashset.insert(nums[i]);

            for(int j = i + 1; j < n; j++) {

                int third = nums[j] - diff;

                if(hashset.find(third) != hashset.end()) {

                    vector<int> temp = {third, nums[j], nums[j] + diff};

                    if(find(nums.begin(), nums.end(),
                            nums[j] + diff) != nums.end()) {

                        st.insert(temp);
                    }
                }

                hashset.insert(nums[j]);
            }
        }

        return st.size();
    }
};