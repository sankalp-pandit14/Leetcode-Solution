// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         vector<int>arr;
//         int n= operations.size();
//         int finalSum=0;
//         for(int i=0;i<n;i++){
//             if(operations[i]=="C"){
//               arr.pop_back();//  pop back does not take anny aruements it just removes you cannot give task to it to remove a specific use slice for it instead
//             }
//             else if(operations[i]=="+"){
//                 int sum= arr[arr.size()-1]+ arr[arr.size()-2];
//                 arr.push_back(sum);
//                 sum=0;
//             }
//             else if(operations[i]=="D"){
//                 int pod= 2*arr[arr.size()-1];
//                 arr.push_back(pod);
//                  pod=1;
//             }
//             else{
                
//                  arr.push_back(stoi(operations[i]));// string to integer converter
//             }

//         }
//         for(int i=0;i<arr.size();i++){
//             finalSum+=arr[i];
//         }
//         return finalSum;
//     }
// };
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> arr;
        int finalSum = 0;

        for(int i = 0; i < operations.size(); i++) {

            if(operations[i] == "C") {
                arr.pop_back();
            }
            else if(operations[i] == "D") {
                arr.push_back(2 * arr.back());
            }
            else if(operations[i] == "+") {
                arr.push_back(arr[arr.size()-1] + arr[arr.size()-2]);
            }
            else {
                arr.push_back(stoi(operations[i]));
            }
            finalSum = 0;
            for(int j = 0; j < arr.size(); j++) {
                finalSum += arr[j];
            }
        }

        return finalSum;
    }
};