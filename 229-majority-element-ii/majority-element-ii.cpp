// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int>ls;
//         map<int,int> mpp;
//         int  n=nums.size();
//         int min= (n/3)+1;
//         for(int i=0; i<n;i++){
//             mpp[nums[i]]++;
//             if(mpp[nums[i]]==min){
//                 ls.push_back(mpp[nums[i]]);
//             }
//             // if(ls.size()==2){
//             //     break;
//             // }
//             }
//             return ls;
//         //     if(ls.size()==0 || ls[0]!=nums[i]|| ls.begin()==ls.end()||ls[1]!=nums[i]{
//         //         int count=0;
//         //         for(int j=0;j<n;j++){
//         //             if(nums[i]==nums[j]){
//         //                 count++;
//         //             }
//         //         }
//         //         if(count>(n/3)){
//         //             ls.push_back(nums[i]);
//         //         }
//         // }
//         // else if(ls.size()==2){
//         //         break;
//         //     }
//         // }
//         // return ls;
//     //  int cnt=0;
//     //  int el;
//     //  for(int i=0; i<nums.size();i++){
//     //     if(cnt==0){
//     //         cnt=1;
//     //         el=nums[i];
//     //     }
//     //     else if(el==nums[i]){
//     //         cnt++;
//     //     }
//     //     else{
//     //         cnt--;
//     //     }
//     //  }
//     //  int cnt1=0;
//     //  for(int i=0;i<nums.size();i++){
//     //     if(el==nums[i]){
//     //         cnt1++;
//     //     }
//     //  }
//     //   if(cnt1>(nums.size()/3)){
//     //         return {el};
//     //     }
//     //     else if(nums.size()>3){
//     //         return nums[];
//     //     }
//     }
// };
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int> ls;
        map<int,int> mpp;

        int n = nums.size();
        int mini = (n / 3) + 1;

        for(int i = 0; i < n; i++) {

            mpp[nums[i]]++;
            if(mpp[nums[i]] == mini) {
                ls.push_back(nums[i]);
            }
        }

        return ls;
    }
};
