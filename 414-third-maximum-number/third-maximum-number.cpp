class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n= nums.size();
         if(n == 1) return nums[0];
        int largest =-1;
        int slargest=-1;
        int tlargest= -1;
       for(int i=0;i<n;i++)
       {
        // skip duplicates
            if(largest != -1 && nums[i] == nums[largest]) continue;
            if(slargest != -1 && nums[i] == nums[slargest]) continue;
            if(tlargest != -1 && nums[i] == nums[tlargest]) continue;

        if(largest == -1 ||nums[largest]<nums[i]){
            tlargest=slargest;
            slargest=largest;
            largest=i;
        }
        else if(slargest == -1 || nums[i]>nums[slargest] ){
            tlargest=slargest;
            slargest=i;
        }
        else if(tlargest == -1 ||nums[i]>nums[tlargest] ){
            tlargest=i;
        }
    }
           if(tlargest == -1){
           return nums[largest]; }
          else{
            return nums[tlargest];
    }
    }
};