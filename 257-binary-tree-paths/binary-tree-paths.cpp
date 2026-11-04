class Solution {
public:
    vector<string>result;
    void jawab(TreeNode* root,string sum){
        if(root==nullptr) return;
       if(!sum.empty()) sum += "->";
sum += to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            result.push_back(sum);  
                return;
        }
        jawab(root->left,sum);
        jawab(root->right,sum);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string sum="";
        jawab(root,sum);
        return result;
    }
};