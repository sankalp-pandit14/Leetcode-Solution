class Solution {
public:
    string triangleType(vector<int>& nums) {

        string ch = "equilateral";
        string ch1 = "isosceles";
        string ch2 = "scalene";
        string ch3 = "none";

        if(nums[0] == nums[1] && nums[1] == nums[2]){
            return ch;
        }
        else if(nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[2]){
            if(nums[0] + nums[1] > nums[2] &&
               nums[1] + nums[2] > nums[0] &&
               nums[0] + nums[2] > nums[1]){
                return ch2;
            }
            else{
                return ch3;
            }
        }
        else{
            if(nums[0] + nums[1] > nums[2] &&
               nums[1] + nums[2] > nums[0] &&
               nums[0] + nums[2] > nums[1]){
                return ch1;
            }
            else{
                return ch3;
            }
        }
    }
};