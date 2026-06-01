class Solution {
public:
    int signFunc(int x){
        if(x > 0) return 1;
        else if(x == 0) return 0;
        else return -1;
    }

    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int product = 1;

        for(int i = 0; i < n; i++) {
            product = product * signFunc(nums[i]);

            if(product == 0) {
                return 0;
            }
        }

        return product;
    }
};