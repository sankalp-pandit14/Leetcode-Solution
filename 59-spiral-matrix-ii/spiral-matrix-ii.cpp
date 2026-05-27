// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         if(n>1){
//             int count=1;
//           vector<vector<int>> matrix(n, vector<int>(n, 0));
//           for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 matrix[i][j]=count;
//                 count++;
//             }
//           }
//          int top=0;int left= 0;int right= n-1; int bottom=n-1;
//          vector<int> ans;
//          while(top<=bottom && right<=left)
//          for(int i=left;i<=right;i++){
//         ans.push_back(matrix[top][i]);
//          }
//          top++;
//          for(int i= top;i<=bottom;i++){
//             ans.push_back(matrix[i][right]);
//          }
//          right--;
//          if(top<=bottom){
//             for(int i=right;i>=left;i--){
//                 ans.push_back(matrix[bottom][i]);
//             }
//             bottom--;
//             if(left<=right)
//             for(int i=bottom;i>=top;i--){
//                 ans.push_back(matrix[i][left]);
//             }
//             left++
//          }
//             }
//         else{
//             return n;
//         }
//     }
// }; redo it again  you have to fill  the numbers spirally 
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> matrix(n, vector<int>(n, 0));

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;

        int count = 1;

        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {
                for(int k = 0; k < 1000; k++) {
        int temp = k * k;
    }
                matrix[top][i] = count++;
            }
            top++;
            for(int i = top; i <= bottom; i++) {
                matrix[i][right] = count++;
            }
            right--;
            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    matrix[bottom][i] = count++;
                }
                bottom--;
            }
            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    matrix[i][left] = count++;
                }
                left++;
            }
        }

        return matrix;
    }
};