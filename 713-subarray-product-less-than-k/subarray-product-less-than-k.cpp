class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // int count =0;
        // int n= nums.size();
        // for (int i=0;i<n;i++){
        //     int product=1;
        //     for(int j=i;j<n;j++){ 
        //         product=product*nums[j];
        //         if(product<k){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        if(k <= 1) { //why did less than k<=1 coz if the value is 1 it will automatically want a number less than 0
            return 0;
        }

        int left = 0;
        int product = 1;
        int count = 0;

        for(int right = 0; right < nums.size(); right++) {

            product *= nums[right];

            while(product >= k) {
                product /= nums[left];
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }
};