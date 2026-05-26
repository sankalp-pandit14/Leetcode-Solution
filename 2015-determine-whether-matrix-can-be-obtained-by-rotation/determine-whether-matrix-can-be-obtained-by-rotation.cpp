//my mistake I did Rotation only for 90 degree but the question asks for a complete 360 deg rotation 
// class Solution {
// public:
//     bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
//         int n = mat.size();
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 swap(mat[i][j],mat[j][i]);
//             }
//         }
//         for(int i=0;i<n;i++){
//             reverse(mat[i].begin(),mat[i].end());
//         }
//         for(int i=0; i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(mat[i][j]!=target[i][j]){
//                 return false;
//                 }
//             }
//         }
//         return true;
//     }
// };
class Solution {
public:
    void rotateMatrix(vector<vector<int>>& mat){
        int n = mat.size();
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        for(int i = 0; i < n; i++){
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    bool check(vector<vector<int>>& mat,
               vector<vector<int>>& target){
        int n = mat.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] != target[i][j]){
                    return false;
                }   }
        }
        return true;
    }
    bool findRotation(vector<vector<int>>& mat,
                      vector<vector<int>>& target) {
        for(int i = 0; i < 4; i++){
            if(check(mat, target)){
                return true;
            }
            rotateMatrix(mat);
        }

        return false;
    }
};