// according we have to find the two minimum and two maximum in this array
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        long long max1 = INT_MIN;
        long long max2 = INT_MIN;

        long long min1 = INT_MAX;
        long long min2 = INT_MAX;

        for(int i = 0; i < nums.size(); i++) {

            // largest
            if(nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] > max2) {
                max2 = nums[i];
            }

            // smallest
            if(nums[i] < min1) {
                min2 = min1;
                min1 = nums[i];
            }
            else if(nums[i] < min2) {
                min2 = nums[i];
            }
        }

        return (max1 * max2) - (min1 * min2);
    }
};