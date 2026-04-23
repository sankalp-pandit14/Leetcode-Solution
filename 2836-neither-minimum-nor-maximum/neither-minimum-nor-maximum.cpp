class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return -1;
        int largest=-1;
        int smallest=-1;
        for(int i=0;i<n;i++){
            if(largest!=-1 && nums[largest]==nums[i]) continue;
            if(smallest!=-1 && nums[smallest]==nums[i]) continue;
            // if there is any same no. in the loop it will skip that number
            if(largest==-1 || nums[largest]<nums[i]){
                largest=i;
            }
            if(smallest==-1 || nums[smallest]>nums[i]){
                smallest=i;
            }
        }
        for(int i=0;i<n;i++){
          if(i!=smallest && i!=largest)
          {return nums[i];
          }
        } 
        return -1;
    }
};