class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> arr;
        int n= nums.size();int rev=0;
        int count=0;
        for(int i=0;i<n;i++){
           int l = nums[i];
           int result=0;
           int rev=0;
           while(l!=0){
           int rev=l%10;
            result= result*10 + rev;
           l=l/10;
           }
           nums.push_back(result);
        }
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;               // a hash map storess all the values that are repeating frequently so give 
                                          // in the third loop it searches whether the key has 0 1 and 2 no thats wrong we need to iterate it
        }
        for(auto it : arr){
                count++;
            }
        return count;
    }
};