class Solution {
public:
    bool checkeven(int n) {
        return n % 2 == 0;
    }
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        vector<int> nums2(n);
        if (!checkeven(nums1[0])) {
            nums2[0] = nums1[0];
            for (int i = 1; i < n; i++) {
                if (!checkeven(nums1[i])) {
                    nums2[i] = nums1[i];
                }
                else {
                    nums2[i] = nums1[i] - nums1[0];
                }
            }
        }        else {
            for (int i = 0; i < n; i++) {
                nums2[i] = nums1[i];
            }
        }
        bool parity = checkeven(nums2[0]);
        for (int i = 1; i < n; i++) {
            if (checkeven(nums2[i]) != parity) {
                return false;
            }
        }
        return true;
    }
};