class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int low= 0, high=n-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            // when your left part is sorted 
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]){
                    high= mid-1;
                }
                else{
                    low= mid+1; // if target does not satisfy the if  condn means it is not on the left sorted arrya so we move low
                }
            }
            else { // means the right part is sorted 
              if(nums[high]>=target && target>=nums[mid]){
                low=mid+1;
            }
            else{
                high= mid-1;  // if target does not satisfy the if  condn means it is not on the right sorted arrya so we move high
            }
        }
        }
        return -1;
    }
};