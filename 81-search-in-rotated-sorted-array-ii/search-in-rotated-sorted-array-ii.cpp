class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n= nums.size();
        bool ans= false;
        int low=0;
        int high= n-1;
        while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            ans= true;
        }
        if(nums[low]==nums[mid]&&nums[mid]==nums[high]){
            low= low+1;
            high=high-1;
            continue;
        }
        if(nums[low]<=nums[mid]){  // left sorted array
          if(nums[low]<= target && nums[mid]>=target){
            high= mid-1;
          }
          else{
            low= mid+1;
          }
        }
        else{   // right sorrted  array 
            if(nums[high]>= target && nums[mid]<=target){
            low= mid+1;
          }
          else{
            high= mid-1;
          }
        }
        }
        return ans;
    }
};