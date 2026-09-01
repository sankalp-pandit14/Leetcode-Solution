class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int n= nums.size();
        // int ans=0;
        // for(int b=0;b<32;b++){
        //     int count=0;
        //     for(int i=0;i<n;i++){                   1st approach
        //       if(nums[i]&(1<<b)){
        //         count++;
        //       }
        //      }
        //      if(count%3==1){
        //         ans=ans|(1<<b);
        //      }}
        //      return ans;
       sort(nums.begin(),nums.end());
       for(int i=1;i<n;i+=3){
        if(nums[i]!= nums[i-1]) return nums[i-1];
       }
       return nums[n-1];
    }
};