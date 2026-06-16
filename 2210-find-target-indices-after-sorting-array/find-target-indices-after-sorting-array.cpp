class Solution {
public:
    int lowerBound(vector<int>& arr, int x){
        int n= arr.size();
        int low=0;
        int high=n-1;
        int ans=n;

        while(low<=high){
            int mid=(low+high)/2;

            if(arr[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

    int UpperBound(vector<int>& arr, int x){
        int n= arr.size();
        int low=0;
        int high=n-1;
        int ans=n;

        while(low<=high){
            int mid=(low+high)/2;

            if(arr[mid]>x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        int lb = lowerBound(nums, target);

        if(lb == nums.size() || nums[lb] != target)
            return ans;

        int ub = UpperBound(nums, target) - 1;

        for(int i = lb; i <= ub; i++){
            ans.push_back(i);
        }

        return ans;
    }
};