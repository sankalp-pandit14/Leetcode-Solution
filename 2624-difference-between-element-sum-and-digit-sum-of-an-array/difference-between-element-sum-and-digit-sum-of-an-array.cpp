class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        int sum2=0;
        int diff=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]<10){
              sum2+=nums[i];
            }
            else{
                int val = nums[i];

                while(val > 0){
              int digit = val % 10;
             sum2 += digit;
             val = val / 10;
}
            }
        }
        diff= abs(sum-sum2);
        return diff;
    }
};