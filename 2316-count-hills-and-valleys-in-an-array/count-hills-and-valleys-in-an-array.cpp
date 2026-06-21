// class Solution {
// public:
//     int countHillValley(vector<int>& nums) {
//         int n= nums.size();
//         int count=0;
//         for(int i=1;i<n-1;i++){
//     if(nums[i]>nums[i+1]&& nums[i]>nums[i-1]){
//         count++;
//     }
//     else if(nums[i]==nums[i+1]){
//         if((nums[i-1]>nums[i] && nums[i]<nums[i+2])||(nums[i-1]<nums[i] && nums[i]>nums[i+2])){
//             count++;
//         }
//     }
//     else if(nums[i-1]>nums[i] && nums[i]<nums[i+1]){
//         count++;
//     }
//         }
//         return count;
//     }
// }; // accepted was wrong only problem was that if there was more than two duplicates
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> a;

        a.push_back(nums[0]);

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {             //all duplicates will beremoved 
                a.push_back(nums[i]);
            }
        }

        int count = 0;

        for(int i = 1; i < a.size() - 1; i++) {
            if((a[i] > a[i - 1] && a[i] > a[i + 1]) ||
               (a[i] < a[i - 1] && a[i] < a[i + 1])) {
                count++;
            }
        }

        return count;
    }
};